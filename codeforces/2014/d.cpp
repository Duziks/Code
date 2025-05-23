#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
#include<algorithm>
#include<cmath>
using namespace std;
int n,d,k;
int a[100005];
int b[100005];
int c[100005];
int l,r;
int minn,maxn;
int aa,bb;
void solve()
{
	cin>>n>>d>>k;
	for(int i=1;i<=n+1;i++)
	{
		a[i]=b[i]=c[i]=0;
	}
	for(int i=1;i<=k;i++)
	{
		cin>>l>>r;
		a[l]++;
		a[r+1]--;
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=b[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",b[i]);
	}printf("\n");
	for(int i=1;i<=n;i++)
	{
		c[i]=c[i-1]+b[i];
	}
	minn=0x7fffffff;
	maxn=0;
	for(int i=1;i<=n-d+1;i++)
	{
		if(c[i+d-1]-c[i-1]<minn)
		{
			minn=c[i+d-1]-c[i-1];
			aa=i;
		}
		if(c[i+d-1]-c[i-1]>maxn)
		{
			maxn=c[i+d-1]-c[i-1];
			bb=i;
		}
	}
	cout<<bb<<" "<<aa<<endl;
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