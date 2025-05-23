
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M = 24 ;
const int INF = 1e17 + 7 ;
const int N = 3e6 + 7 ;  
#define all(x) x.begin(),x.end()
#define pii pair<int,int> 



inline void solve() {
    int n ; cin >> n ; 
    vector<int> a(n) , b(n); 
    for(int i = 0 ; i < n ; i ++ ) cin >> a[i] ; 
    for(int i = 0 ; i < n ; i ++ ) cin >> b[i] ; 
    
    auto chec = [&](int x) -> bool {
        int xx = (a[0] == 1) , y = (a[0] == 1) , z = b[0] ; 
        for(int i = 1 ; i < x ; i ++ ) {
            if(a[i] == 1 ) xx ++ , y ++ ; 
            z ^= b[i] ; 
        }
        int sum = xx ; 
//        if(xx == 0) sum ++ ; 
        if(y > 0) sum -- ; 
        if(sum == z ) return true ; 
        for(int i = x ; i < n ; i ++ ) {
            if(a[i - x] == 1) xx -- , y -- ; 
            if(a[i] == 1) xx ++ ,y ++ ;
            sum = xx ; 
            if(y > 0) sum -- ; 
            z = z ^ b[i - x] ^ b[i] ; 
            if(sum == z) return true ; 
        }
        return false ; 
    };
    int l = 1 , r = n ; 
    int ans = 0 ; 
    while(l  <= r ) {
        int mid = l + r >> 1 ; 
        if(chec(mid)) l = mid + 1 , ans = mid ; 
        else r = mid - 1 ; 
//        cout << l << endl ; 
    }
    cout << ans << endl ; 
}
signed main() {
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    solve() ; 
    return 0;
}