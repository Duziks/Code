#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
#include<array>
using namespace std;
int a[105];
int upd=0;
long long mod=998244353;
void slove()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	while(1)
	{
		upd=0;
		for(int i=1;i<n;i++)
		{
			while(a[i]<a[i+1]){
				a[i]++;
				a[i+1]--;
				upd=1;
			}
		}
		if(upd==0) break;
	}
	long long ans=1;
	for(int i=1;i<=n;i++)
		ans=(1ll*ans*a[i])%mod;
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