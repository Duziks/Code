#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
long long r[105],q[105];
long long d;
void solve()
{
	int t;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>q[i]>>r[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>t>>d;
		if(d%q[t]<=r[t]){
			cout<<d/q[t]*q[t]+r[t]<<"\n";
		}else{
			cout<<d/q[t]*q[t]+q[t]+r[t]<<"\n";
		}
	}
	return;
}
int main()
{
	int t;
	t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}