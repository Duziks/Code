#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M = 24 ;
const int INF = 1e17 + 7 ;
const int N = 3e6 + 7 ;  
#define all(x) x.begin(),x.end()
#define pii pair<int,int> 



inline void solve() {
    int n , m , k ; cin >> n >> m >> k ; 
    int a = max(n,m) , b = n + m - a ; 
    if(b < k) {
        cout << 0 << endl ; return ; 
    }
    int ans = a / k ; 
    int ok = 1 ; 
    int ks = ans * k ; 
    if(b >= k * 2) {
        ans <<= 1 , ok ++ ; 
        b -= 2 * k ; 
        int now = b / k  ; 
        ans += now * 2 ; 
    }
    cout << max(ans,0LL) << endl ; 
    
}
signed main() {
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    int t ; cin >> t ; 
    while(t -- ) solve() ;
    return 0;
}