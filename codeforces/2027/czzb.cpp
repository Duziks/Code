#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
using namespace std;
#define int long long 
map<int,vector<int>>mp ; 
map<int,int> f ; 
int work(int tmp)
{
    if(f[tmp]) 
    return f[tmp]; 
    for(auto v : mp[tmp]){
        if(v == 1){
            f[tmp]=max(f[tmp],tmp);
            continue; 
        }
        f[tmp]=max(work(tmp + v - 1),f[tmp]) ; 
    }
    f[tmp]=max(f[tmp],tmp); 
    
    return f[tmp] ; 
}
void solve(){
    int n; 
    cin>>n;
    int ans=n;  
    mp.clear();
    vector<int> a(n + 1);
    vector<int> vis(n + 1); 
    f.clear();
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        a[i]+=i-1;
        mp[a[i]].push_back(i);
    }
    
    for(auto v:mp[n]) {
        ans=max(ans,work(n+v-1)) ; 
    }
    cout<<ans<<endl ; 
}
signed main() {

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}