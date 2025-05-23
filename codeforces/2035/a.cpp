#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
long long n,m,r,c;
long long ans;
void solve()
{
	cin>>n>>m>>r>>c;
	ans=(n-r)*(m-1)+(n*m-(r-1)*m-c);
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