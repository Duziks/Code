#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int t;
long long x,y,a,b;
double ans1,ans2,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld%lld",&x,&y,&a,&b);

		ans1=(double)sqrt((y-b)*(y-b)*1.0+(x+a)*(x+a)*1.0);
		ans2=(double)sqrt((y+b)*(y+b)*1.0+(x-a)*(x-a)*1.0);
		if(ans1<ans2) printf("%.10lf\n",ans1);
		else printf("%.10lf\n",ans2);
	}
	return 0;
}