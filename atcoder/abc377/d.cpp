#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n,m;
int a[200005];
int l,r;
long long ans;
int now;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
		a[i]=0x7fffffff;
	for(int i=1;i<=n;i++)
	{
		cin>>l>>r;
		if(r<a[l]) a[l]=r;
	}
	now=m+1;
	for(int i=m;i>=1;i--)
	{
		// cout<<i<<":"<<min(a[i],now)-i<<endl;
		ans+=1ll*(min(a[i],now)-i);
		now=min(now,a[i]);
	}
	cout<<ans<<endl;
	return;
}
int main()
{
	int t;
	// cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}