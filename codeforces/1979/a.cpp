#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int t;
int n;
int a[500004];
int ans=0x7fffffff;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=0x7fffffff;
		for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(int i=1;i<n;i++)
		{
			ans=min(ans,max(a[i],a[i+1]));
		}
		printf("%d\n",ans-1);
	}
	return 0;
} 
