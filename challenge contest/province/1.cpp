#include<cstring>
#include<cstdio>
#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int l;
int s,t,m;
int minn=0x7fffffff;
int k;
map<int,int> mp;
void dfs(int now,int num)
{
	cout<<now<<"\n";
	if(num>=minn) return;
	if(now>l){
		minn=min(num,minn);
		return;
	}
	if(mp[now]) num++;
	for(int i=s;i<=t;i++)
		dfs(now+i,num);
}
int main()
{
	cin>>l;
	cin>>s>>t>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>k;
		mp[k]=1;
	}
	dfs(0,0);
	cout<<minn<<"\n";
	return 0;
}
/*
10
2 3 5
2 3 5 6 7
*/