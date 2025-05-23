#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n,m,p,q;
void solve()
{
	cin>>n>>m>>p>>q;
	
	if(n%p==0)
	{
		if((n/p)*q==m) cout<<"YES\n";
		else cout<<"NO\n";
	}
	else cout<<"YES\n";
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