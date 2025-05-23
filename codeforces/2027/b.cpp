#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int a[2005];
int now;
int ans;
void solve()
{
	cin>>n;
	ans=0x7fffffff;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		now=i-1;
		for(int j=i+1;j<=n;j++)
		{
			if(a[j]>a[i]) now++;
		}
		ans=min(now,ans);
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