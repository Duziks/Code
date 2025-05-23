#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,m,k;
int now[100005];
int maxn;
int a;
int ans=0;
int o;
void solve()
{
	cin>>n>>m>>k;
	memset(now,0,sizeof(now));
	maxn=0;
	o=0;
	for(int i=1;i<=n*m;i++)
	{
		cin>>a;
		if(o) continue;
		now[(a-1)/m]++;
		maxn=max(maxn,now[(a-1)/m]);
		// cout<<maxn<<":\n";
		if(maxn>=m-k){
			ans=max(m,i);
			o=1;
		}
	}
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