#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int n ;  
int num = 0 ; 
stack<int> sta ; 
string s ;
int ans = 0 ; 
void solve() {
	cin >> n ; 
    cin >> s ; 
    ans=0;
    num=0;
    while(!sta.empty())
    	sta.pop();
    sta.push(n - 1) ; 
    for(int i = n - 2 ; i >= 0 ; i -= 2 ) {
          if(i !=0 && s[i - 1] == '(') {
              ans ++ ; 
          }
          else {
              if(sta.size()!=0) {
                  ans += (sta.top() - i ) ; 
                  sta.pop() ; 
              }
              else 
               	sta.push(i) ;
               if(i!=0)
               sta.push(i - 1) ;
          } 
    }
    cout << ans << endl ;
     return;
}
signed main() {
    int t ;
    cin >> t; 
    while(t -- ) 
    	solve() ;
    return 0 ;
}