#include <iostream>
using namespace std;
 
const long long MOD = 998244353;
 
// 快速幂求逆元：求 a^(MOD-2) mod MOD
long long modInv(long long a, long long mod = MOD) {
    long long res = 1, p = mod - 2;
    while(p){
        if(p & 1)
            res = res * a % mod;
        a = a * a % mod;
        p >>= 1;
    }
    return res;
}
 
// 计算组合数 C(n, k) ，由于 k 较小，可直接计算
long long comb(long long n, int k) {
    if(n < k) return 0;
    if(k == 0) return 1;
    if(k == 1) return n % MOD;
    if(k == 2) return (n % MOD) * ((n - 1) % MOD) % MOD * modInv(2) % MOD;
    if(k == 3) return (n % MOD) * ((n - 1) % MOD) % MOD * ((n - 2) % MOD) % MOD * modInv(6) % MOD;
    return 0;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    // 4个类别的计数
    long long cnt[2][2] = {0};
    long long x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        // 注意处理负数：((x % 2) + 2) % 2 保证结果为0或1
        int px = (int)(((x % 2) + 2) % 2);
        int py = (int)(((y % 2) + 2) % 2);
        cnt[px][py]++;
    }
    
    // 计算正确的三角形组合数
    long long num = 0;
    // 同一类的组合数
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            num = (num + comb(cnt[i][j], 3)) % MOD;
        }
    }
    // 两类组合：遍历不同的类别
    // 枚举所有两个不同的类别
    for (int i1 = 0; i1 < 2; i1++){
        for (int j1 = 0; j1 < 2; j1++){
            for (int i2 = 0; i2 < 2; i2++){
                for (int j2 = 0; j2 < 2; j2++){
                    if(i1*2+j1 >= i2*2+j2) continue; //确保每对只算一次
                    // 两种情况：
                    // 从类别1取2个，从类别2取1个
                    long long ways = (comb(cnt[i1][j1], 2) * (cnt[i2][j2] % MOD)) % MOD;
                    // 从类别2取2个，从类别1取1个
                    ways = (ways + (comb(cnt[i2][j2], 2) * (cnt[i1][j1] % MOD)) % MOD) % MOD;
                    num = (num + ways) % MOD;
                }
            }
        }
    }
    
    // 总三点组合数
    long long total = comb(n, 3);
    long long invTotal = modInv(total);
    long long ans = num % MOD * invTotal % MOD;
    cout << ans << "\n";
    
    return 0;
}
