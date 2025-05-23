#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n,m;
int a[500005];
int t[500005];
int k,x,y;
int lowbit(int aa)
{
	return aa&-aa;
}
void add(int xx,int aa)
{
	for(int i=xx;i<=n;i+=lowbit(i))
		t[i]+=aa;
}
int ask(int xx)
{
	int now=0;
	for(int i=xx;i>0;i-=lowbit(i))
		now+=t[i];
	return now;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		add(i,a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		cin>>k>>x>>y;
		if(k==1)
		{
			add(x,y);
		}
		if(k==2)
		{
			cout<<ask(y)-ask(x-1)<<"\n";
		}
	}
	return 0;
}