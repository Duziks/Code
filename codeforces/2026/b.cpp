#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int n;
ll a[2005];
ll maxn;
ll ans;
ll minn=0x7fffffff;
int po;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	maxn=0;
	minn=0x7fffffff;
	if(n&1)
	{
		for(int j=1;j<=n;j+=2)
		{
			ll nmax=0;
			for(int i=1;i<=n;i+=2)
			{
				if(i==j){
					i--;
					continue;
				}
				nmax=max(a[i+1]-a[i],nmax);
			}
			minn=min(minn,nmax);
		}
		cout<<minn<<endl;
	}
	else{
		ans=0;
		for(int i=1;i<=n;i+=2)
		{
			ans=max(a[i+1]-a[i],ans);
		}
		cout<<ans<<endl;
	}
	
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