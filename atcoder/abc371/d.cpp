#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
ll n,q;
ll l,r;
struct N{
	ll x;
	ll p;
};N v[200005];
int cmp(N aa,N bb)
{
	return aa.x<bb.x;
}
ll pre[200005];
ll ne[200005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i].x;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>v[i].p;
	}
	sort(v+1,v+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		pre[i]=pre[i-1]+v[i].p;
		ne[i]=v[i].x;
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>l>>r;
		ll L=lower_bound(ne+1,ne+n+1,l)-ne-1;
		ll R=upper_bound(ne+1,ne+n+1,r)-ne-1;
		// cout<<"pp:"<<L+1<<" "<<R<<endl;
		cout<<pre[R]-pre[L]<<endl;
	}
	return 0;
}