#include<cstring>
#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
using namespace std;
int n,m;
string now,x,y;
int k;
map<string,int> mp;
int fa[1005];
int cnt=0;
int find(int a)
{
	if(fa[a]==a) return fa[a];
	else{
		fa[a]=find(fa[a]);
		return fa[a];
	}
}
void un(int a,int b)
{
	a=find(a);
	b=find(b);
	fa[b]=a;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>now;
		mp[now]=++cnt;
		fa[i]=i;
	}

	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		un(mp[x],mp[y]);
	}
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y;
		if(find(mp[x])==find(mp[y])) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}