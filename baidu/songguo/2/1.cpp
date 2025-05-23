#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#define ll long long
using namespace std;
priority_queue<ll,vector<ll>,greater<ll> > q;
int n;
long long ans=0;
int k;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&k);
		q.push(k);
	}
	for(int i=1;i<n;i++)
	{
		int x=q.top();
		q.pop();
		int y=q.top();
		q.pop();
		ans+=(x+y);
		q.push(x+y);
	}
	printf("%lld\n",ans); 
	return 0;
}