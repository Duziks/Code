#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
char a[100][100];
char b[100][100];
int dx[10]={0,1,1,-1,-1,2,2,-2,-2};
int dy[10]={0,2,-2,2,-2,1,-1,1,-1};
long long n,m;
int x,y;
map<pair<int,int>,bool> mp;
long long tot;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		for(int j=0;j<=8;j++)
		{
			int xx=x+dx[j];
			int yy=y+dy[j];
			if(xx>=1&&yy>=1&&xx<=n&&yy<=n)
			if(!mp[make_pair(xx,yy)]){
				tot++;
				mp[make_pair(xx,yy)]=true;
			}
		}
	}
	cout<<1ll*n*n-tot<<endl;
	return;
}
int main()
{
	int t;
	// cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}