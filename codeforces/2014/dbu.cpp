#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int n,d,k;
int l,r;
vector<int> a[100005];
priority_queue<int,vector<int>,greater<int> > q;
long long minn,maxn;
int mo,bro;
void solve()
{
	cin>>n>>d>>k;
	for(int i=1;i<=n;i++)
		a[i].clear();
	for(int i=1;i<=k;i++)
	{
		cin>>l>>r;
		a[l].push_back(r);
	}
	minn=0x7fffffff,maxn=0;
	while(!q.empty()) q.pop();
	for(int i=1;i<=n;i++)
	{
		if(i-d+1>=1)
		{
			while(!q.empty()&&q.top()<i-d+1)
			{
				q.pop();
			}
		}
		for(auto x:a[i]){
			q.push(x);
		}
		int len=q.size();
		if(i-d+1>=1)
		{
			if(len<minn){
				minn=len;
				mo=i-d+1;
			}
			if(len>maxn){
				maxn=len;
				bro=i-d+1;
			}
		}
		
	}
	printf("%d %d\n",bro,mo);
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}