#include<cstring>
#include<cstdio>
#include<iostream>
#include<map>
#include<cmath>
using namespace std;
struct E{
	int v;
	int w;
	int nex;
}e[1000005];
int head[1000005];
int vis[1000005];
int cnt=0;
int n,m,s,t,t0;
int x,y,z;
int ans=0;
void add(int u,int v,int w)
{
	e[++cnt].v=v;
	e[cnt].w=w;
	e[cnt].nex=head[u];
	head[u]=cnt;
}
void dfs(int now,int val)
{
	if(now==t){
		ans+=val;
		ans+=t0;
		return;
	}
	for(int i=head[now];i!=-1;i=e[i].nex)
	{
		int v=e[i].v;
		int w=e[i].w;
		if(!vis[v]){
			vis[v]=1;
			dfs(v,val+w);
			vis[v]=0;
		}
	}
}
int main()
{
	cin>>n>>m>>s>>t>>t0;
	for(int i=1;i<=n;i++) head[i]=-1;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y>>z;
		add(x,y,z);
	}
	dfs(s,0);
	cout<<ans-t0<<"\n";
	return 0;
}