#include<cstring>
#include<cstdio>
#include<iostream>
#define ll long long
using namespace std;
ll ans=1ll;
ll n;
ll now;
ll cnt;
int isp;
void solve()
{
	cin>>n;
	ans=1ll;
	now=2;
	// isp=0;
	// for(ll i=2;i*i<=n;i++)
	// 	if(n%i==0){
	// 		isp=1;
	// 		break;
	// 	}
	// if(isp==0){
	// 	if(n==1) cout<<"1\n";
	// 	else
	// 	cout<<"2\n";
	// 	return;
	// }

	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cnt=0;
			while(n%i==0)
			{
				n/=i;
				cnt++;
			}
			ans=(ans*(2ll*cnt+1ll));
		}
	}

	if(n!=1)
	{
		ans=ans*3;
	}
	cout<<(ans-1)/2+1<<"\n";

	// while(n>1)
	// {
	// 	cnt=0;
	// 	if(n%now==0)
	// 	{
	// 		while(n>1&&n%now==0)
	// 		{
	// 			n/=now;
	// 			cnt++;
	// 		}
	// 		ans=(ans*(2ll*cnt+1ll));
	// 	}
	// 	now++;
	// }


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