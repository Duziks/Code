#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<map>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n,m,q;
int k,id,x;
int now;
int nom;
pair<long long,int> a[200005];
map<int,bool> vis;
int read()
{
	int f=1,xx=0;
	char ch;
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		xx=(xx<<1)+(xx<<3)+ch-'0';
		ch=getchar();
	}
	return f*xx;
}
int cmp(pair<long long,int> aa,pair<long long,int> bb)
{
	return aa.first>bb.first||aa.first==bb.first&&aa.second<bb.second;
}
void solve()
{
	n=read();
	m=read();
	q=read();
	now=0;
	for(int i=1;i<=m;i++)
	{
		a[i].first=0;
		a[i].second=i;
	}
	for(int i=1;i<=q;i++)
	{
		k=read();
		if(k==1)
		{
			x=read();
			now=x;
			nom=m;
			vis.clear();
		}
		if(k==2)
		{
			id=read();
			x=read();
			if(x==now)
			{
				if(!vis[id])
				{
					a[id].first=(a[id].first+1ll*nom);
					nom--;
					vis[id]=1;
				}
			}
		}
		if(k==3)
		{
			id=read();
			x=read();
			if(x==now)
			{
				if(!vis[id])
				{
					vis[id]=1;
				}
			}
		}
	}
	sort(a+1,a+m+1,cmp);
	for(int i=1;i<=m;i++)
		cout<<a[i].second<<" "<<a[i].first<<"\n";
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