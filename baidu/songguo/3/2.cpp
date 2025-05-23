#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int a[1005][1005];
int prei[1005][1005];
int prej[1005][1005];
int ans=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
	{
		int now=0;
		for(int j=1;j<=n;j++)
		{
			now+=a[i][j];
			prei[i][j]=now;
		}
		
	}
	for(int i=1;i<=n;i++)
	{
		int now=0;
		for(int j=1;j<=n;j++)
		{
			now+=a[j][i];
			prej[j][i]=now;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int now=0;
			now+=prei[i][j];
			now+=prej[i][j];
			now+=prei[1][j];
			now+=prej[i][1];
			now-=a[i][j];
			now-=a[1][j];
			now-=a[i][1];
			ans=max(now,ans);
		}
	}
	cout<<ans<<"\n";
	return 0;
}