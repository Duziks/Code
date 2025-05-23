#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int n,m;
long long a[200005];
long long pre[200005];
int tot;
long long now;
long long ans;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			now=(pre[j]-pre[i-1])/m;
			if(now>0) tot+=now;
			else break; 
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans+=1ll*(a[i])*i*(n-i+1);
		if(ans>1e9)
		{
			while(ans>-1e9&&tot>0)
			{
				ans-=1ll*m;
				tot--;
			}
		}
	}
	ans-=1ll*(tot*m);
	cout<<ans<<endl;
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