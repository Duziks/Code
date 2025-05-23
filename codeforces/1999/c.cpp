#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
// #include<pair>
using namespace std;
pair<long long,long long> a[200005];
void slove()
{
	long long n,s,m;
	scanf("%lld%lld%lld",&n,&s,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld",&a[i].first,&a[i].second);
	}
	sort(a+1,a+n+1);
	a[0].second=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i].first-a[i-1].second>=s){
			printf("YES\n");
			return;
		}
	}
	if(m-a[n].second>=s){
		printf("YES\n");
			return;
	}
	printf("NO\n");
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