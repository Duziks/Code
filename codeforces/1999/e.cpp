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
	ans+=(log3(l));
	printf("1:%d\n",(log3(l)));
	// for(int i=l+1;i<=r;i++)
	// 	ans+=log3(i);
	int now=1;
	while(now<l) now*=3;
	if(r<now-1){
		ans+=(log3(r)*(r-l));
			printf("2:%d\n",log3(r)*(r-l));
		printf("%d\n",ans);
		return;
	}
	else{
		printf("kkkk:%d %d %d\n",log3(2),now,l);
		ans+=(log3(now-1)*(now-l));
		printf("3:%d\n",log3(now-1)*(now-l));
	}
	while(now<r){
		now*=3;
		if(now<=r+1)
		{
			ans+=(log3(now-1)*(now-now/3));
			printf("4:%d\n",log3(now-1)*(now-now/3));
		}
	}
	ans+=(log3(now-1)*(r-now/3+1));
	printf("5:%d\n",log3(now-1)*(r-now/3+1));
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