#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7 ;
const int INF = 1e17 + 7 ;
const int N = 3e6 + 7 ;  
#define all(x) x.begin(),x.end()
#define pii pair<int,int> 



inline void solve() {
    int n ; cin >> n ; 
    int sum = 0 ; 
    vector<int> a(n) ; 
    for(int i = 0 ; i < n ; i ++ ) cin >> a[i] , sum += (i + 1) * (n - i) * a[i]; 
    cout << sum << endl ; 
    
}
signed main() {
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    solve() ; 
    return 0;
}