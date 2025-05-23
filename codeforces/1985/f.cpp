#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int t;
int n;
long long h;
long long a[200005];
long long c[200005];
int check(long long now)
{
	long long kk=0;
	for(int i=1;i<=n;i++)
	{
//		kk+=((1ll*now/c[i])*a[i]);
//		if(now%(c[i])!=0) kk+=a[i];
		kk+=1ll*(now+c[i]-1)/c[i]*1ll*a[i];
	}
	if(kk>=h) return 1;
	else return 0;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%d",&h,&n);
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		for(int i=1;i<=n;i++)
			scanf("%lld",&c[i]);
		long long l=1,r=1e11;
		while(l<r)
		{
			long long mid=(l+r)/2;
			if(check(mid)) r=mid;
			else l=mid+1;
		}
		printf("%lld\n",l);
	}
	return 0;
}
