#include<cstring>
#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
int n,m;
int a[500005];
int cha[500005];
int t[500005];
int o;
int x,y,k;
int lowbit(int aa)
{
	return aa&-aa;
}
void add(int xx,int aa)
{
	for(int i=xx;i<=n;i+=lowbit(i))
		t[i]+=aa;
}
ll ask(int xx)
{
	ll now=0;
	for(int i=xx;i>0;i-=lowbit(i))
		now+=t[i];
	return now;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cha[i]=a[i]-a[i-1];
		add(i,cha[i]);
	}

	for(int i=1;i<=m;i++)
	{
		cin>>o;
		if(o==1){
			cin>>x>>y>>k;
			add(x,k);
			add(y+1,-k);
		}
		if(o==2){
			cin>>x;
			cout<<ask(x)<<endl;
		}
	}
	return 0;
}