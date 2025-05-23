#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n;
int a[505][505];
int x,y;
int now;
int ans=0;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	ans=0;
	for(int i=1;i<=n;i++)
	{
		x=i;
		y=1;
		now=0;
		while(x<=n&&y<=n)
		{
			now=min(now,a[x][y]);
			x++;
			y++;
		}
		ans+=now;
	}
	for(int i=2;i<=n;i++)
	{
		y=i;
		x=1;
		now=0;
		while(x<=n&&y<=n)
		{
			now=min(now,a[x][y]);
			x++;
			y++;
		}
		ans+=now;
	}
	cout<<ans*(-1)<<endl;
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