#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n,x,y;
char a[200005];
int s[200005];
int h[200005];
long long ans;
int main()
{
	scanf("%d%d%d",&n,&x,&y);
	cin>>a;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='W'){
			s[i]=s[i-1]+1;
			h[i]=h[i-1];
		}
		if(a[i]=='S'){
			s[i]=s[i-1]-1;
			h[i]=h[i-1];
		}
		if(a[i]=='A'){
			s[i]=s[i-1];
			h[i]=h[i-1]-1;
		}
		if(a[i]=='D'){
			s[i]=s[i-1];
			h[i]=h[i-1]+1;
		}
	}
	// for(int i=0;i<n;i++)
	// 	printf("%d ",h[i]);
	// printf("\n");
	// for(int i=0;i<n;i++)
	// 	printf("%d ",s[i]);
	// printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(h[j]-h[i]==x&&s[j]-s[i]==y){
				ans+=(n-j);
				// printf(":%d %d\n",i+1,j);
				break;
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}