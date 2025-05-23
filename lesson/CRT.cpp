#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int n;
ll a[100005],b[100005];
ll ans;
ll now;
ll gcd(ll x,ll y)
{
	ll r=x%y;
	while(r>0)
	{
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
ll lcm(ll x,ll y)
{
	return 1ll*x*y/gcd(x,y);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	ans=b[1];
	now=1;
	for(int i=1;i<n;i++)
	{
		now=lcm(now,a[i]);
		while(ans%a[i+1]!=b[i+1])
			ans+=now;
	}
	cout<<ans<<endl;
	return 0;
}