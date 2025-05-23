#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
long long p,m;
long long ans;
void solve()
{
	cin>>p>>m;
	ans=m/p;
	for(long long i=m/p;i<=(m+p-1)/p;i++)
		if(((p*i+1)^(p-1))<=m) ans++;
	cout<<ans<<endl;
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