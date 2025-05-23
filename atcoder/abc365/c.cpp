#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long a[200005];
long long n,m;
long long check(long long aa)
{
	long long now=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>aa) now+=aa;
		else now+=a[i];
	}
	return now;
}
void slove()
{
	scanf("%lld%lld",&n,&m);
	long long tot=0;
	long long maxn=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		tot+=a[i];
		if(maxn<a[i]) maxn=a[i];
	}
	if(tot<=m){
		printf("infinite\n");
		return;
	}
	long long l=0,r=maxn+1;
	long long mid=0;
	// long long fmid=0;
	while(l<r)
	{
		mid=(l+r+1)/2;
		// if(mid==fmid) break;
		// fmid=mid;
		// printf("%lld\n",l);
		if(check(mid)<=m) l=mid;
		else r=mid-1;
	}
	printf("%d\n",l);
	return;
}
int main()
{
	int t;
	t=1;
	// scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}