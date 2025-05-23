#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int h,w;
char a[1005][1005];
int x[1000006];
int y[1000006];
int t=0;
queue<pair<int,int> > q;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char ar[4]={'<','>','^','v'};
int main()
{
	cin>>h>>w;
	for(int i=0;i<h;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(a[i][j]=='E')
			{
				q.push(make_pair(i,j));
			}
		}
	}
	if(q.empty())
	{
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
				cout<<a[i][j];
			cout<<"\n";
		}
		return 0;
	}
	while(!q.empty())
	{
		int nx=q.front().first;
		int ny=q.front().second;
		q.pop();
		for(int i=0;i<4;i++)
		{
			int xx=nx+dx[i];
			int yy=ny+dy[i];
			if(xx>=0&&xx<h&&yy>=0&&yy<w)
			{
				if(a[xx][yy]=='.')
				{
					a[xx][yy]=ar[i];
					q.push(make_pair(xx,yy));
				}
			}
		}
	}
	for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
				cout<<a[i][j];
			cout<<"\n";
		}
	return 0;
}