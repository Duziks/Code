#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<vector>

#define ll long long
using namespace std;
int n;
ll a[300005];

long long ans;
// void dfs(long long now)
// {
// 	if(mp[now].size()==0){
// 		if(now>ans) ans=now;
// 	}
// 	else
// 	for(ll i : mp[now])
// 	{
// 		dfs(i);
// 	}
// }
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=i-1;
	}
	map<ll,vector<ll> > mp;
	map<ll,bool> vis;
	auto dfs = [&](auto dfs,ll now) -> void {
        if(vis[now]) return;
       	if(now>ans) ans=now;
        vis[now]=1;
		for(ll i : mp[now])
		{
			dfs(dfs,i);
		}
    };
	for(int i=2;i<=n;i++)
		mp[a[i]].push_back(a[i]+i-1);
	ans=n;
	dfs(dfs,n);
	cout<<ans<<endl;
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}