#include <bits/stdc++.h>
typedef long long ll;
const int p = 25165843;
const int N = 3e6 + 50;
const int mod = 2147483587;
typedef unsigned long long ull;
ull P[N],h[N],k = 0,d[N];
ull _hash(int l,int r) {
    return (h[r] - h[l-1] * P[r - l + 1] % mod + mod) % mod;
}
ull _Hash(int l,int r) {
    return (d[r] - d[l-1] * P[r - l + 1] % mod + mod) % mod; 
}
void solve() {
    std::set<ull> H;
    std::string s,S;
    std::cin >> s;
    S = s + s;
    int num = s.length(),pos = S.length();
    for(int i = 0; i < pos; i ++) {
        d[i+1] = d[i] * p + (S[i] - '0');
        d[i+1] %= mod;
    }
    P[0] = 1;
    for(int i = 1; i <= 2e6; i ++) {
        P[i] = P[i-1] * p;
        P[i] %= mod;
    }
    for(int i = 1; i <= pos + 1 - num; i ++) {
        H.insert(_Hash(i,i+num-1));
    }

        std::string t;
        std::cin >> t;
        int len = t.length();
        std::memset(h,0,sizeof(h));
        for(int j = 0; j < len; j ++) {
            h[j+1] = h[j] * p + (t[j] - '0');
            h[j+1] %= mod;
        }
        int ans = 0;
        for(int l = 1; l <= len + 1 - num; l ++) {
            if( H.count(_hash(l,l+num-1)) ) ans++;
        }
        std::cout << ans << '\n';
    

    for(int i = 0; i <= std::max(len,pos); i++) {
        d[i] = h[i] = 0;
        P[i] = 0;
    }
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
/*

2
abab abababab
abab ababcbaba
*/