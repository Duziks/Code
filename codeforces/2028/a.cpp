#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
const int N = 2e3 + 4;
const int mod = 1e9 + 7;
void solve() {
    int n,a,b;
    std::cin >> n >> a >> b;
    std::string s;
    std::cin >> s;
    //int len = s.size();
    int A = 0, B = 0;
    for(int i = 0; i < n; i ++) {
        if(s[i] == 'N') B ++;
        if(s[i] == 'S') B--;
        if(s[i] == 'E') A ++;
        if(s[i] == 'W') A--;
    }
    int nA = 0, nB = 0;
    for(int i = 0; i < n ; i++) {
        if(s[i] == 'N') nB ++;
        if(s[i] == 'S') nB--;
        if(s[i] == 'E') nA ++;
        if(s[i] == 'W') nA--;
        // nA + k A = a 
        // nB + k B = b
        if(A == 0 && B != 0) {
            int k = (b - nB) / B;
            if(nA + k * A == a && nB + k * B == b) {
                std::cout << "YES\n";
                return;
            }
        }
        if(A != 0 && B == 0) {
            int k = (a - nA) / A;
            if(nA + k * A == a && nB + k * B == b) {
                std::cout << "YES\n";
                return;
            }
        }
        if(A != 0 && B != 0) {
            int k = (a - nA) / A;
            int p = (b - nB) / B;
            if(k == p) {
                if(nA + k * A == a && nB + k * B == b) {
                    std::cout << "YES\n";
                    return;
                }
            }
        }
        if(A == 0 && B == 0) {
            if(nA == a && nB == b) {
                std::cout << "YES\n";
                return;
            }
        }

    }
    std::cout << "NO\n";
    return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int _ = 1;
    std::cin >> _;
    while(_ --) {
        solve();
    }
    return 0;
}