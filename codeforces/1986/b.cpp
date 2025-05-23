#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;
int t;
int n,m;
int now;
int a[105][105];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n+1;i++)
		for(int j=1;j<=m+1;j++)
		a[i][j]=0;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		scanf("%d",&a[i][j]);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				now=max(max(a[i-1][j],a[i][j-1]),max(a[i+1][j],a[i][j+1]));
				if(now<a[i][j]) a[i][j]=now;
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			printf("%d ",a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
