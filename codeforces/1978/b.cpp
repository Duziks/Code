#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t;
long long n,a,b;
long long ans;
long long x;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&n,&a,&b);
		x=(b-a);
		if(x<0) x=0;
		if(x>n) x=n;
		ans=1ll*(b+1)*x-1ll*x*(x+1)/2+1ll*(n-x)*a;
		printf("%lld\n",ans);
	}
	return 0;
 } 
