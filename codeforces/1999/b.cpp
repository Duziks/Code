#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
void slove()
{
	int a,b,c,d;
	int ans=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>c&&b==d||a==c&&b>d||a>c&&b>d) ans+=2;
	if(b==c&&a>d||b>c&&a==d||b>c&&a>d) ans+=2;
	printf("%d\n",ans);
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