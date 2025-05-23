#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
ll n,ans;
int main()
{
	ans=1ll;
	cin>>n;
	for(int i=1;i<=n;i++)
		ans*=i;
	cout<<ans<<"\n";
	return 0;
}