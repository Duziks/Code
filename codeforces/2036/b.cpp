#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int n,k;
long long ban[200005];
map<int,int> mp;
int b,c;
int tt=0;
long long ans;
void solve()
{
	cin>>n>>k;
	tt=0;
	memset(ban,0,sizeof(ban));
	mp.clear();
	for(int i=1;i<=k;i++)
	{
		cin>>b>>c;
		if(!mp[b])
		{
			
		 mp[b]=++tt;
		 ban[tt]=0;
		}
		ban[mp[b]]+=c;
	}
	ans=0;
	sort(ban+1,ban+tt+1);
	int too=tt-n+1;
	for(int i=tt;i>=too;i--)
		ans+=ban[i];
	cout<<ans<<"\n";
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
