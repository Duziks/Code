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
//      1    1
//...-1 y 1 1 1 1 1 1  1 1 -1 1 -1 1 -1 1 .... 
inline void solve() {
    int n ; cin >> n ; 
    vector<int> a(n) ,r; 
    int sum = 0 ; 
    map<int,int> mp ; 
    int maxi = 0 ;
    for(int i = 0 ; i < n ; i ++ ) {
        cin >> a[i] ; 
        sum += a[i] ; 
        mp[a[i]] ++ ; 
        if(mp[a[i]] >= 2 && a[i] > maxi) {
            maxi = a[i] ;
        }
        a[i] = maxi ; 
    }
    mp.clear() ; maxi = 0 ; 
    for(int i = 0 ; i < n ; i ++ ) {
        sum += a[i] ; 
        mp[a[i]] ++ ; 
        if(mp[a[i]] >= 2 && a[i] > maxi) {
            maxi = a[i] ;
        }
        a[i] = maxi ; 
    }
    for(int i = 0 ; i < n ; i ++ ) {
        sum += (n - i) * a[i] ; 
    }
    cout << sum << endl ;
}
signed main() {
    ios::sync_with_stdio(false) ; 
    cin.tie(0) ; 
    int t ; cin >> t ; 
    while(t -- ) solve() ;
    return 0 ;
}