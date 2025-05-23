#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int h,w;
int k;
char a[15][15];
int vis[15][15];
int dx[5]={0,0,1,-1};
int dy[5]={1,-1,0,0};
int ans=0;
void dfs(int x,int y,int step)
{
	if(step==k){
		// cout<<x<<" "<<y<<endl;
		ans++;
		return;
	}
	for(int i=0;i<4;i++)
	{
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=0&&xx<=h&&yy>=0&&yy<=w)
		{
			if(a[xx][yy]=='.'&&!vis[xx][yy])
			{
				vis[xx][yy]=1;
				dfs(xx,yy,step+1);
				vis[xx][yy]=0;
			}
		}
	}
}
void solve()
{
	cin>>h>>w>>k;
	for(int i=0;i<h;i++)
		cin>>a[i];
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
		{
			memset(vis,0,sizeof(vis));
			if(a[i][j]=='.'){
				vis[i][j]=1;
				dfs(i,j,0);
			}
			// cout<<ans<<endl;
		}
	cout<<ans<<endl;
	return;
}
int main()
{
	int t;
	t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}