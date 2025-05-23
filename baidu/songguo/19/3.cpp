#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> w;             
vector<vector<int>> in;    
vector<int> c_out;           
vector<bool> is_raw;
int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}        
long long dfs(int i, int need) {
    if (need == 0) return 0;
    if (w[i] >= need) {
        w[i] -= need;
        return 0;
    }
    int rem = need - w[i];
    w[i] = 0;
    if (is_raw[i]) {
        return rem;
    }
    int c = c_out[i];
    int cnt = (rem + c - 1) / c;
    long long add_needed = 0;
    for (int a : in[i]) {
        add_needed += dfs(a, cnt);
    }
    w[i] += cnt * c;
    w[i] -= rem;
    return add_needed;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    n = read();
    w.resize(n+1);
    for (int i = 1; i <= n; i++) {
        w[i] = read();
    }
    in.assign(n+1, {});
    c_out.assign(n+1, 0);
    is_raw.assign(n+1, false);
    for (int i = 1; i <= n; i++) {
        int k;
        k = read();
        if (k == 0) {
            int c;
            c=read();    
            is_raw[i] = true;
        } else {
            in[i].resize(k);
            for (int j = 0; j < k; j++) {
                in[i][j] = read();
            }
            c_out[i] = read();
        }
    }
    m = read();
    long long ans = dfs(1, m);
    cout << ans << "\n";
    return 0;
}
