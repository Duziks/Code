#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
struct P{
	int w;
	int ls;
	int rs;
}a[100005];
int n;
int x,y;
int root;
int ans=0;
void tra(int now)
{
	ans=max(ans,a[now].w);
	if(a[now].ls) tra(a[now].ls);
	if(a[now].rs) tra(a[now].rs);
}
int main()
{
	cin>>n>>root; //输入结点数n，和根结点编号root
	int w;
	for(int i=1;i<=n;i++)
	{
		cin>>w>>x>>y;   	//输入编号为i的结点的权值w和其左右子节点编号x和y，若无则用0表示
		a[i].w=w;
		a[i].ls=x;
		a[i].rs=y;
	}
	tra(root);
	cout<<ans<<endl;
	return 0;
}
/*
7 1
3 2 3
1 4 5
4 0 0
1 0 0
5 6 7
9 0 0
2 0 0
*/