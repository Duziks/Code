#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int a[300005];
long long t[300005];
long long ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		t[i]=t[i-1]+a[i];
	}
	for(int i=2;i<=n;i++)
	{
		ans+=a[i]*(t[i-1]);
	}
	cout<<ans<<"\n";
	return 0;
}