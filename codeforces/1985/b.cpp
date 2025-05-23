#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t;
int n;
int maxn=0;
int now;
int ans;
int k;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		maxn=0;
		for(int i=2;i<=n;i++)
		{
			k=n/i;
//			printf("K ;%d\n",k);
			now=i*k*(k+1)/2;
//			printf("%d %d\n",i,now);
			if(now>maxn){
				maxn=now;
				ans=i;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
