#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <map>
#include <bitset>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <algorithm>
#define int long long
using namespace std;
int n , a , b ;
inline void solve() {
   int n , k ; 
   cin >> n >> k ; 
   vector<int> a(n) ; 
   int MAX = 0 ;
   for(int i = 0 ; i < n ; i ++ ) {
   a[i] = i + 1  ;
   MAX += abs(n - i - i - 1) ;
   }
   if((k & 1 )|| k > MAX ) {
      cout << "No" << endl ;
      return ; 
   }
   else cout << "Yes" << endl ;
   int ans = 0 ;
   int NU ;
   if(k == 0) {
      for(int i = 0 ; i < n ; i ++ )
	  cout << a[i] << " \n"[i == n-1] ;
      return ;
   }
   for(int i = 0 ; i < n / 2; i ++ ) {
      if(ans + 2 * abs(n - i - i - 1) <= k)
	  {
         swap(a[i],a[n-1-i]) ;
         ans += 2 * abs(n - i - i - 1);
      }
      else {
         NU = i ;break ;
      }
   }
   for(int i = n - NU - 1 ; i > NU ; i -- ) 
   {
      if(ans + 2 * abs(i - NU) == k) {
         swap(a[i],a[NU]) ;
         break ;
      }
   }
   for(int i = 0 ; i < n ; i ++ ) 
   cout << a[i] << " \n"[i == n-1];
}
signed main(){
    int t ; cin >> t ;
    while(t -- ) 
	solve() ;
    return 0; 
}
