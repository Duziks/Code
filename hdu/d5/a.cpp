#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long p=998244353;
long long qm(long aa,long bb)
{
	long long ans=1;
	long long t=aa;
	while(bb>0)
	{
		if(bb&1){
			ans*=t;
			ans=ans%p;
		}
		t=t*t;
		t=t%p;
		bb=bb>>1;
	}
	return ans%p;
}
void slove()
{
	long long n;
	scanf("%lld",&n);
	if(n<=2) {
		printf("2\n");
		return;
	}
	if(n%3!=2) {
		printf("%lld\n",qm(2,n));
		return;
	}
	printf("%lld\n",qm(2,n-1));
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