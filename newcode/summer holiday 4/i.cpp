#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<set>
typedef long long ll;
const int N = 1e6 + 50;
void solve() {
    int n,m;
    std::cin >> n >> m;
    std::vector<int> V[N];
    for(int i = 1,u,v; i <= m; i++) {
        std::cin >> u >> v;
        int x = std::min(u,v);
        V[std::max(u,v)].push_back(x);
    }
    int Z = 1,num = 0;
    ll ans = 0;
    for(int i = 1;  i <= n; i++ ) {
        std::set<int> s;
        for(auto x : V[i]) {
            if(x < Z) continue;
            s.insert(x);
        }
        if(s.size() == (i - Z)) {
            ans += num;
            num ++;
        }
        else {
            Z = i;
            num = 1;
        }
        //std::cout << num << " ";
    }
    std::cout << ans + n << '\n';
    return;
}

int main() {
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int _ = 1;
    // std::cin >> _;
    // std::cout<<"ans";
    while(_ --) {
        solve();
    }
    return 0;
}
