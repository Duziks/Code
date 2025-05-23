#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M = 24 ;
const int INF = 1e17 + 7 ;
const int N = 3e6 + 7 ;  
#define all(x) x.begin(),x.end()
#define pii pair<int,int> 


inline int qs (int x , int q) {
    int res = 1 ; 
    while(q) {
        if(q & 1) res = res * x % M ; 
        x = x * x % M ; 
        q >>= 1 ;
    }
    return res ; 
}
inline void solve() {
    int n , q ; cin >> n >> q ; 
    vector<int> a(n + 1) , f(n + 1);  
    for(int i = 1 ; i <= n ; i ++ ) cin >> a[i] ;
    while(q -- ) {
        int x ; cin >> x ; 
        f[x] ++ ; 
    }
    for(int i = 1 ; i <= n ; i ++ ) {
        if(f[i] == 0 ) continue ; 
        for(int j = i ; j <= n ; j += i) 
        a[j] = a[j] * qs(10,f[i]) % M ; 
    }
    for(int i = 1 ; i <= n ; i ++ ) 
    cout << a[i] << " " ; 
}
signed main() {
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    solve() ; 
    return 0;
}