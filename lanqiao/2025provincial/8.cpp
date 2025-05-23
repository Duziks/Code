#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
struct E{
	int v;
	int nex;
}e[1000006];
int n;
int a[500005];
int head[1000006];
int vis[1000005];
int mp[1000006];
int x,y;
int xx,yy;
int cnt=0;
int ans;
int add(int u,int v)
{
	e[++cnt].v=v;
	e[cnt].nex=head[u];
	head[u]=cnt;
	return cnt;
}
void dfs(int now,int tot)
{

	if(tot>ans) ans=tot;
	vis[now]=1;
	for(int i=head[now];i!=-1;i=e[i].nex)
	{
		int v=e[i].v;
		if(!vis[i])
		{
			vis[i]=vis[mp[i]]=1;
			dfs(v,tot+a[v]);
			vis[i]=vis[mp[i]]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		head[i]=-1;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		xx=add(x,y);
		yy=add(y,x);
		mp[xx]=yy;
		mp[yy]=xx;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			vis[j]=0;
		dfs(i,a[i]);
	}
	cout<<ans<<"\n";
	return 0;
}
/*
9
1 0 1 0 0 1 1 0 1
2 8
2 9
2 5
1 5
1 3
1 4
4 5
4 6
6 7

3
1 1 1
1 2
2 3
1 3
*/