#include<stdio.h>
#include<math.h>
#define MAXN 10005
int n;
int a[MAXN];
int gcd(int x,int y)
{
	int r=x%y;
	while(r)
	{
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int ans=gcd(a[1],a[2]);
	for(int i=3;i<=n;i++)
	{
		ans=gcd(ans,a[i]);
	}
	printf("%d\n",ans);
	return 0;
}