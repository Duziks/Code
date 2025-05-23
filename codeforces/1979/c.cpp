#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int t;
int n;
int a[105];
long long lc;
int b[105];
int ans=0;
long long gcd(long long aa,long long bb)
{
	long long r;
	while(bb>0)
	{
		r=aa%bb;
		aa=bb;
		bb=r;
	}
	return aa;
}
long long lcm(long long aa,long long bb)
{
	return 1ll*aa*bb/gcd(aa,bb);
}
int o=0; 
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		lc=1;
		o=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			lc=lcm(lc,a[i]);
		}
		ans=0;
		for(int i=1;i<=n;i++)
		{
			b[i]=lc/a[i];
			ans+=lc/a[i];
		}
		for(int i=1;i<=n;i++){
			if(b[i]*a[i]<=ans){
				printf("-1\n");
				o=1;
				break;
			}
		}
		if(o==1) continue;
		for(int i=1;i<=n;i++)
		printf("%d ",b[i]);
		printf("\n");
	}
	return 0;
}
