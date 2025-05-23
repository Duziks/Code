#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
int n,m;
int ss,t;
double a[1005][1005];
double dis[1005];
int vis[1005];
int x,y,z;
priority_queue<pair<double,int>  > q;
double djk(int s)
{
	while(!q.empty())
		q.pop();
	memset(vis,0,sizeof(vis));
	for(int i=1;i<=n;i++) dis[i]=0;
	q.push(make_pair(0,s));
	dis[s]=1.0;
	vis[s]=1;
	while(!q.empty())
	{
		int now=q.top().second;
		q.pop();
//		printf("%d\n",now);
		vis[now]=0;
		for(int i=1;i<=n;i++)
		{
			if(a[now][i]>0)
			{
				int v=i;
				double w=a[now][i];
				if(dis[now]*w>dis[v]){
					dis[v]=dis[now]*w;
					if(vis[v]==0){
						vis[v]=1;
						q.push(make_pair(dis[v],v));
					}
				}
			}
		}
	}
	return dis[t];
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y>>z;
		a[x][y]=double((100.0-z)/100.0);
	}
	cin>>ss>>t;
	printf("%.5lf\n",100.0/djk(ss));
	return 0;
}