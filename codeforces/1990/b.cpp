#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
int n,x,y;
int a[100005];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&y,&x);
		for(int i=x;i<=y;i++) a[i]=1;
		for(int i=x-1;i>=1;i--)
			if(a[i+1]==1) a[i]=-1;
			else a[i]=1;
		for(int i=y+1;i<=n;i++)
			if(a[i-1]==1) a[i]=-1;
			else a[i]=1;
		for(int i=1;i<=n;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	return 0;
}