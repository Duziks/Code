#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
void slove()
{
	long long l,a,b;
	double x;
	scanf("%lld%lld%lld",&l,&a,&b);
	x=(double)((a*a+b*b)/2*1.0*a);
	if(x<=l&&x>=0){
		printf("Yes\n");
		printf("%lf\n",x);
		return;
	}
	if(a>l)
	{
		x=(double)((a*a+b*b-l*l)*1.0/(2*a-2*l));
		if(x<=l&&x>=0)
		{
			printf("Yes\n");
			printf("%lf\n",x);
			return;
		}
		if(x<=0)
		{
			printf("Yes\n");
			printf("0\n");
			return;
		}
	}
	if(a<l)
	{
		x=(double)((a*a+b*b-l*l)*1.0/(2*a-2*l));
		if(x<=l&&x>=0)
		{
			printf("Yes\n");
			printf("%lf\n",x);
			return;
		}
		if(x>=l)
		{
			printf("Yes\n");
			printf("0\n");
			return;
		}
	}
	if(a==l)
	{
		if(b>=-1*l||b<=l){
			printf("%lf\n",(double)l);
			return;
		}

	}
	printf("No\n");
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