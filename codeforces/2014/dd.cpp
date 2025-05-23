#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> a[1000005] ;
int l , r ;
int n , d , k ;
int xxi,nni; 
void solve() {
    
    cin >> n >> d >> k ; 
    for(int i = 1 ; i <= n ; i ++ ) 
        a[i].resize(0) ; 
    vector<int>  p(n + 1); 
    for(int i = 1 ; i <= k ; i ++ ) 
    {
        cin >> l >> r ; 
        a[l].push_back(r) ;
    }
    int um = 0 ; 
    for(int i = 1 ; i < d ; i ++ ) {
        for(auto x : a[i]) {
            p[x] ++ ;
            um ++ ; 
        }
    }
    int axi = -1, ini = 0x7fffffff;
    for(int i = d ;i <= n ; i ++ ) 
    {
        for(auto x : a[i])
        {
            p[x] ++ ; um ++ ; 
        }
        um -= p[i - d] ; 
        if(um > axi )
        {
            axi = um ;
             xxi = i - d + 1 ;
        }
        if(um < ini){
            ini = um ;
             nni = i - d + 1 ; 
        }
    }
    cout << xxi << " " << nni << endl ; 
}
int main() {
    int t ; 
    cin >> t ;
    while(t -- ) solve() ;
    return 0 ;
}