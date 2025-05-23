//#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <map>
#include <bitset>
#include <unordered_map>
#include <set>
#include <queue>
#include <random>
#include <stack>
#include <list>
#include <algorithm>
using namespace std ;

const int N = 1e6 + 5 ; 
const int INF = 1e9 + 7 ; 
const int MOD = 998244353 ; 

#define pii pair<int,int> 
#define int long long 
#define all(a) a.begin(),a.end()

//
//k * D + k1 * h1 + k2 * h2 + .... = mini  ; 

inline int gcd (int a , int b) {
    int r ; 
    while(b) {
        r = a % b ; 
        a = b ; 
        b = r ; 
    }
    return a ; 
}
signed main() {
    ios::sync_with_stdio(false) ; 
    cin.tie(0) ; 
    int n , D ; cin >> n >> D ; 
    vector<int> a(n) ;
    cin >> a[0] ;   
    int gc = a[0] ; 
    for(int i = 1 ; i < n ; i ++ ) {
        cin >> a[i] ;
        gc = gcd(gc,a[i]) ; 
    }
    if(D % gc == 0) {
        cout << 0 << endl ; return 0 ; 
    }
//    D ...     3 6 9 12 ......... k * gc 
//    5 - 3 = 2 
    int ans = D % gc ; 
    ans = min(ans , abs(gc - ans)) ;
    cout << ans << endl ;
    return 0 ;
}