#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
long long mod=998244353;
int a[105];
int pre[105];
long long ans=1ll;
double ave;
int n;
void slove()
{
	
	memset(pre,0,sizeof(pre));
	scanf("%d",&n);
	ans=1ll;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=n;i>=2;i--)
	{
		ave=pre[i]*1.0/i;
		printf("ave:%lf\n",ave);
		if((double)(a[i]*1.0)>ave)
		{
			a[i-1]+=(a[i]-ceil(ave));
			pre[i-1]+=(a[i]-ceil(ave));
			a[i]=ceil(ave);
		}
	}
	printf("final:");
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(int i=1;i<=n;i++)
		ans=1ll*(1ll*ans*a[i])%mod;
	printf("%lld\n",ans);
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	// t=1;
	while(t--){
		slove();
	}
	return 0;
}