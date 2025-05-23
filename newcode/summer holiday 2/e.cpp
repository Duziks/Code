#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
long long a;
long long now;
long long x;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a);

		now=a;
		x=1;
		// x=x<<1;
		while(now>0)
		{
			if(now&1){
				a=a^(x);
				// printf("%lld\n",x);
				break;
			}
			now>>=1;
			x<<=1;
		}
		// printf("%lld\n",a);
		if(a==0) printf("-1\n");
		else{
			printf("%lld\n",a);
		}
	}
	return 0;
}