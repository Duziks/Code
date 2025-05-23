#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t; 
int k;
int ans;
int main()
{
	scanf("%d",&t);
	int n;
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&k);
			if(i!=n)
			{
				if(k>ans) ans=k;
			}
		}
		ans+=k;
		printf("%d\n",ans);
		
	}
	return 0;
 } 
