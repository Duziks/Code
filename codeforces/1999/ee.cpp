#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
// #include<pair>
using namespace std;
int log3(int aa)
{
	double aaa=(double)aa*1.0;
	double tmp=log(aaa)*1.0/log(3);
	return (int)tmp+1;
}
void slove()
{
	int l,r;
	scanf("%d%d",&l,&r);
	int ans=0;
	ans+=(2*log3(l));
	for(int i=l+1;i<=r;i++)
		ans+=log3(i);
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