#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[1005],b[1005];
int maxa,maxb;
void solve()
{
	int n;
	maxa=0;
	maxb=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	{
		maxa=max(maxa,a[i]);
		maxb=max(maxb,b[i]);
	}
	cout<<(maxa+maxb)*2<<endl;
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}