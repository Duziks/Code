#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int map[505][505];
void solve()
{
	cin>>n;
	if(n%2==1)
	{
		int now=n*n-1;
		for(int k=1;k<=n/2+1;k++)
		{
			map[k][k]=now--;
			if(now<0) break;
			for(int i=n-k+1;i>=k+1;i--)
				map[k][i]=now--;
			for(int i=n-k+1;i>=k+1;i--)
				map[i][k]=now--;
			map[n-k+1][n-k+1]=now--;
			for(int i=n-k;i>=k+1;i--)
				map[n-k+1][i]=now--;
			for(int i=n-k;i>=k+1;i--)
				map[i][n-k+1]=now--;
		}
	}
	if(n%2==0)
	{
		int now=n*n-1;
		for(int k=1;k<=n/2;k++)
		{
			map[k][k]=now--;
			for(int i=n-k+1;i>=k+1;i--)
				map[k][i]=now--;
			for(int i=n-k+1;i>=k+1;i--)
				map[i][k]=now--;
			map[n-k+1][n-k+1]=now--;
			for(int i=n-k;i>=k+1;i--)
				map[n-k+1][i]=now--;
			for(int i=n-k;i>=k+1;i--)
				map[i][n-k+1]=now--;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<map[i][j]<<" ";
		cout<<"\n";
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