#include<cstring>
#include<cstdio>
#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int n;
int a[1000005];
int minn,maxn;
int num=0;
double ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(a[1]>a[2]) maxn=a[1],minn=a[2];
	else {
		maxn=a[2];
		minn=a[1];
	}
	num=0;
	for(int i=3;i<=n;i++)
	{
		num+=a[i];
		if(a[i]>maxn){
			num+=maxn;
			num-=a[i];
			maxn=a[i];
		}
		if(a[i]<minn){
			num+=minn;
			num-=a[i];
			minn=a[i];
		}
		ans=num*1.0/(i-2);
		printf("%.2lf\n",ans);
	}
	return 0;
}