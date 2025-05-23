#include<cstring>
#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n,a,b;
void solve() {
   int n , k ; 
   cin >> n >> k ; 
   vector<int> a(n) ;
   int maxi = 0 ;
   for(int i = 0 ; i < n ; i ++ ) {
   a[i] = i + 1  ;
   maxi += abs(n - i - i - 1) ;
   }
   if((k & 1 )|| k > maxi ) {
      cout << "No" << endl ;
      return ; 
   }
   else cout << "Yes" << endl ;
   int ans = 0 ;
   int tar ;
   if(k == 0) {
      for(int i = 0 ; i < n ; i ++ ) cout << a[i] << " \n"[i == n-1] ;
      return ;
   }
   for(int i = 0 ; i < n / 2; i ++ ) {
      if(ans + 2 * abs(n - i - i - 1) <= k){
         swap(a[i],a[n-1-i]) ;
         ans += 2 * abs(n - i - i - 1);
      }
      else {
         tar = i ;break ;
      }
   }
   for(int i = n - tar - 1 ; i > tar ; i -- ) {
      if(ans + 2 * abs(i - tar) == k) {
         swap(a[i],a[tar]) ;
         break ;
      }
   }
   for(int i = 0 ; i < n ; i ++ ) 
   cout << a[i] << " \n"[i==n-1];
}
int main(){

    int t ;
	cin >> t ;
    while(t -- )
		solve();
    return 0; 
}
