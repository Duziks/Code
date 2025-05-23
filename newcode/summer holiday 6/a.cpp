#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void slove()
{
	int n;
	int k;
	long long ans=0;
	scanf("%d%d",&n,&k);
	if(k>n/2) k=n-k;
	if(k==n/2&&n%2==0){
		ans=n;
	}
	else{
		ans=1ll*n*k+1;
	}
	printf("%lld\n",ans);


	return;
}
int main()
{
	int t;
	t=1;
	while(t--)
	{
		slove();
	}
	return 0;
}