#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
long long n,m,k;
long long ans;
void solve()
{
	cin>>n>>m>>k;
	if(n>=k&&m>=k){
		ans=1ll*(n/k)*2+1ll*(m/k)*2-4;
		if(ans<=0) ans=1;
		cout<<ans<<"\n";
	}
	else cout<<"0"<<"\n";
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