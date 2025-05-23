#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
long long k,m,h;
int check(long long a)
{
	long long now;
	long long tot=a;
	long long tmp;
	now=a;
	while(now>=m)
	{
		tmp=1ll*(now/m*k);
		tot+=tmp;
		if(tot>=h) return 1;
		tmp+=now%m;
		now=tmp;
	}
	tot+=now;
	// printf("%lld %lld\n",a,tot);
	return 0;
}
void slove()
{
	scanf("%lld%lld%lld",&m,&k,&h);
	if(h==0){
		printf("0\n");
		return;
	}
	long long l=0;
	long long r=h+1;
	long long mid=0;
	while(l<r)
	{
		mid=(l+r)>>1;
		if(check(mid)) r=mid;
		else l=mid+1;
	}
	printf("%lld\n",l);
	return;
}
int main()
{
	int t;
	// t=1;
	scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}