#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct N{
	long long x;
	int y;
};N b[200005];
int cnt;
int t;
int n;
long long m;
int a[200005];
long long now;
long long num;
long long maxn;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%lld",&n,&m);
		cnt=0;
		now=0;
		num=0;
		maxn=0;
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		sort(a+1,a+n+1);
		now=a[1];
		a[n+1]=0;
		for(int i=2;i<=n+1;i++)
		{
			if(a[i]!=a[i-1])
			{
				b[++cnt].x=now;
				b[cnt].y=a[i-1];
				now=0;
			}
			now+=a[i];
		}
		for(int i=1;i<=cnt;i++)
		{
			if(b[i].x>maxn) maxn=b[i].x;
		}
		for(int i=1;i<cnt;i++)
		{
			printf("lllllll:%d %lld\n",b[i].y,b[i].x);
			if(b[i].y==b[i+1].y-1)
			{
				if((b[i].x+b[i+1].x)<=m)
				{
					num=b[i].x+b[i+1].x;
					if(num>maxn) maxn=num;
				}
				else{
					num=b[i].x+b[i+1].x-ceil((double)(b[i].x+b[i+1].x-m)*1.0/b[i].y)*b[i].y;
					if(num>maxn) maxn=num;
					num=b[i].x+b[i+1].x-ceil((double)(b[i].x+b[i+1].x-m)*1.0/b[i+1].y)*b[i+1].y;
					if(num>maxn) maxn=num;
				}
			}
		}
		printf("%lld\n",maxn);
	}
	return 0;
}