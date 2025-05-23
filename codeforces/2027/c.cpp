#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
using namespace std;
#define int long long 
void solve() {
    int n ; 
    cin >> n ; 
    vector<int> a(n + 1) , vis(n + 1); 
    map<int,vector<int> > mp ; 
    map<int,int> f ; 
    for(int i = 1 ; i <= n ; i ++ ) 
    	cin >> a[i] ; 
    for(int i = 1 ; i <= n ; i ++ ) {
        a[i] += i - 1 ; 
        mp[a[i]].push_back(i) ; 
//        cout << a[i] << " " ; 
    }
    auto dfs = [&](auto dfs , int now) -> int {
        if(f[now]) return f[now] ; 
        for(auto v : mp[now]) {
            if(v == 1) {
                f[now] = max(f[now],now) ; continue ; 
            }
            f[now] = max(dfs(dfs,now + v - 1) , f[now]) ; 
        }
        f[now] = max(f[now],now) ; 
        return f[now] ; 
    };
    int ans = n ; 
    for(auto v : mp[n]) {
        ans = max(ans,dfs(dfs,n + v - 1)) ; 
    }
    cout << ans << endl ; 
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ;
    cin >> t ;
    while (t -- ) solve() ;
    return 0;
}