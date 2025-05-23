#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
long long n,l;
long long x,y;
long long f;
long long work(long long a)
{
	if(a<=0) return 0;
	return 1ll*a*(a+1)/2;
}
void solve()
{
	cin>>n>>l;
	f=0;
	if(n>=l)
	{
		 x=(n-l-1)/2+1;
		 y=x+l;
		 f+=work(x-1);
		 f+=work(n-y);
		 if(l&1){
		 	f+=work(l/2-1)*2+l/2;
		 }else
		 {
		 	f+=work(l/2-1)*2;
		 }
	}
	else{
		if(n&1){
			x=n/2+1;
			f=work(x-1)*2;
		}
		else{
			x=n/2;
			f+=work(x-1);
			f+=work(x);
		}
		y=x+l;
	}

	// for(int i=1;i<=n;i++)
	// {
	// 	f+=1ll*min(abs(i-x),abs(i-y));
	// }
	printf("%lld %lld %lld\n",x,y,f);
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}