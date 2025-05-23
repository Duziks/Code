#include<cstring>
#include<cstdio>
#include<iostream>
#define ll long long
using namespace std;
int n,f;
ll a[200005];
ll cha[200005];
ll cha2[200005];
int o;
int l,r,k;
int lowbit(int x)
{
	return x&-x;
}
void add(int x,ll aa)
{
	for(int i=x;i<=n;i+=lowbit(i))
	{
		cha[i]+=aa;
		cha2[i]+=aa*(x);
	}
}
ll ask(int x)
{
	ll now=0;
	for(int i=x;i>0;i-=lowbit(i))
	{
		now+=(cha[i]*(x+1)-cha2[i]);
	}
	return now;
}
int main()
{
	cin>>n>>f;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		add(i,a[i]-a[i-1]);
	}
	for(int i=1;i<=f;i++)
	{
		cin>>o;
		if(o==1){
			cin>>l>>r>>k;
			add(l,k);
			add(r+1,-k);
		}
		if(o==2){
			cin>>k;
			add(1,k);
			add(2,-k);
		}
		if(o==3){
			cin>>k;
			add(1,-k);
			add(2,k);
		}
		if(o==4){
			cin>>l>>r;
			cout<<ask(r)-ask(l-1)<<"\n";
		}
		if(o==5){
			cout<<ask(1)<<"\n";
		}
	}
	return 0;
}