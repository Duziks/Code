#include<cstring>
#include<cstdio>
#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int n;
ll k;
int p[200005];
int ans[200005];
ll pm(ll aa,ll bb,ll mod)
{
	ll f=1;
	ll t=aa;

	while(bb!=0)
	{
		if(bb&1) f=f*t%mod;
		t=t*t%mod;
		bb>>=1;
	}
	return f%mod;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>p[i];
	vector<int> cir[n+1];
	for(int i=1;i<=n;i++)
	{
		if(ans[i]) continue;
		int tmp=i;
		int tot=0;
		do{
			tmp=p[tmp];
			cir[i].push_back(tmp);
			tot++;
		}while(tmp!=i);
		ll num=pm(2,k,tot);
		tmp=i;
		for(int j=0;j<tot;j++)
		{
			ans[cir[i][(j-num+tot)%tot]]=cir[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}