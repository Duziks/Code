#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std ;
#define int long long 
void solve() {
    int n ; 
    int ans = 0 ;
    int T = 0 ; 
    cin >> n ;
    vector<int> a(n + 1) ,P(n + 1) , R(n + 1); 
    for(int i = 1 ; i <= n ; i ++ ) 
        cin >> a[i] ; 
    
    for(int i = 2 ; i <= n ; i ++ )
    {
        R[i] = a[i] ; 
        if(a[i] < a[i - 1]) {
            if(a[i] == 1) {
                cout <<"-1"<< endl ; 
                return ;
            }
            while(R[i] < a[i - 1]) {
                R[i] = R[i] * R[i] ; 
                P[i]++; 
            } 
            P[i] += P[i - 1] ; 
            ans += P[i] ; 
        }
        else {
            R[i - 1] = a[i - 1] ; 
            while(a[i] > R[i - 1] && P[i - 1]) {
                P[i - 1] -- ; 
                R[i - 1] = R[i - 1] * R[i - 1] ; 
            }
            if(R[i - 1] < a[i]) continue ; 
            if(R[i - 1] == a[i]) P[i] = P[i - 1] ;
            else P[i] = P[i - 1] + 1 ; 
            ans += P[i] ;
        }
    }
    cout << ans <<"\n";
    return ; 
}
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    int t; 
    cin >> t; 
    while(t -- ){
        solve(); 
    }
    return 0;
}