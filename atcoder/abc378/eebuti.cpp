#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int n;
ll m;
ll a[200005];
ll b[200005];
ll pre[200005];
ll t[200005];
ll ans;
int tot;
ll num=0;
int lowbit(int x)
{
	return x&-x;
}
void add(int x,ll aa)
{
	for(int i=x;i<=n;i+=lowbit(i))
		t[i]+=aa;
}
ll ask(int x)
{
	ll now=0;
	for(int i=x;i>0;i-=lowbit(i))
		now+=t[i];
	return now;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		pre[i]=(pre[i-1]+a[i])%m,b[i]=pre[i];
	for(int i=1;i<=n;i++)
	{
		ans+=1ll*pre[i]*i;
		// ans-=1ll*pre[i-1]*(n-i+1);
	}
	for(int i=1;i<=n;i++)
		ans-=1ll*pre[i-1]*(n-i+1);
	sort(b+1,b+n+1);
	tot=unique(b+1,b+n+1)-b-1;
	for(int i=1;i<=n;i++){
		pre[i]=lower_bound(b+1,b+tot+1,pre[i])-b;
	}
	// for(int i=1;i<=n;i++)
	// 	cout<<pre[i]<<" ";
	// cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		add(pre[i],1);
		num+=(ask(tot)-ask(pre[i]));
	}
	// cout<<"num:"<<num<<"\n";
	ans+=1ll*num*m;
	cout<<ans<<endl;
	return 0;
}