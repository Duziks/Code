#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
struct E{
	int v;
	int nex;
};E a[1000006];
int head[100005];
int cnt;
int n;
int b[100005];
int fen[100005];
int ff;
int ans=0;
int fans[100005];
int t;
void un(int u,int v)
{
	a[++cnt].v=v;
	a[cnt].nex=head[u];
	head[u]=cnt;
}
void dfs(int now,int bei)
{
	fen[now]=bei;
	ans=max(ans,bei);
	for(int i=head[now];i!=-1;i=a[i].nex)
		dfs(a[i].v,bei+1);

}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		head[i]=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		if(b[i]==-1)
		{
			ff=i;
			continue;
		}
		un(b[i],i);
	}
	dfs(ff,1);
	cout<<ans<<"\n";
	for(int i=1;i<=n;i++)
	{
		if(fen[i]==ans)
			fans[++t]=i;
	}
	for(int i=1;i<t;i++)
		cout<<fans[i]<<" ";
	cout<<fans[t]<<"\n";
	return 0;
}