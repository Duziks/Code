#include<bits/stdc++.h>

using namespace std;

#define int long long 
const int N = 2e6 + 5;
const int INF = 1e18 + 7 ;
const int MOD = 1e9 + 7 ; 
#define all(x) x.begin(),x.end()
#define pii pair<int,int> 


inline void solve() {
    int n ; cin >> n ; 
    string s ; cin >> s ; s = " " + s ; 
    vector<int> f; 
    queue<int> q ; 
    int ans = 0 ; 
    for(int i = n ; i >= 1 ; i -- ) {
        if(s[i] == '1') q.push(i) ; 
        else {
            ans += i ; 
            if(q.size()) q.pop() ; 
        }  
    }
    
    int now = q.size() - (q.size() + 1 )/ 2; 
    while(now) {
        q.pop() ; 
        now -- ; 
    }
    while(q.size()) {
        ans += q.front() ; q.pop() ; 
    }
    cout << ans << endl ; 
    
}
//101101
    
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ; cin >> t ; 
    while(t -- ) solve() ; 
    return 0;
}