#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int n;
long long k;
int p[200005];
int sum[200005];
int fa[200005];
int ans[200005];
long long now;
int tmp;
int find(int aa)
{
	if(fa[aa]==aa) return fa[aa];
	else{
		fa[aa]=find(fa[aa]);
		return fa[aa];
	}
}
void un(int aa,int bb)
{
	aa=find(aa);
	bb=find(bb);
	fa[bb]=aa;
}
ll qm(ll aa,ll bb,ll mod)
{
	ll an=1;
	ll t=aa;
	while(bb>0)
	{
		if(bb&1){
			an*=t;
			an=an%mod;
		}
		t=t*t;
		t=t%mod;
		bb>>=1;
	}
	return an%mod;
}
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		fa[i]=i;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	for(int i=1;i<=n;i++)
	{
		un(i,p[i]);
	}

	for(int i=1;i<=n;i++)
	{
		find(i);
	}
	for(int i=1;i<=n;i++)
	{
		sum[find(i)]++;
	}
	for(int i=1;i<=n;i++)
	{
		// now=k%sum[find(i)]; 
		// cout<<i<<" "<<sum[find(i)]<<"\n";
		now=qm(2,k,sum[find(i)]);
		tmp=i;
		// cout<<now<<endl;
		for(int j=1;j<=now;j++)
		{
			tmp=p[tmp];
		}
		ans[i]=tmp;
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
	return;
}
int main()
{
	int t;
	// cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}