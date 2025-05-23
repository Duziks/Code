#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<cstdlib>
#include<algorithm>
// #include<pair>
using namespace std;
char a[100005];
int vis[100005];
int tot;
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
void solve()
{
	cin>>a;
	int l=strlen(a);
	tot=l;
	for(int i=0;i<l;i++)
		vis[i]=0;
	int o=0;
	for(int i=0;i<l;i++)
		if(a[i]=='-') o=1;
	if(!(a[0]=='>'&&a[l-3]=='>'&&a[l-2]=='>'&&a[l-1]=='>'&&o))
		cout<<"No\n";
	else{
		int ing=0;
		int now;
		for(int i=0;i<l;i++)
		{
			if(a[i]=='-')
			{
				if(ing==0)
				{
					if(!vis[i-1]) tot--;
					vis[i-1]=1;
					if(!vis[i]) tot--;
					vis[i]=1;
					now=i;
					ing=1;
				}
				else{
					if(!vis[i]) tot--;
					vis[i]=1;
					continue;
				}
			}
			if(a[i]=='>')
			{
				if(ing==1)
				{
					if(!vis[i]) tot--;
					if(!vis[i+1]) tot--;
					if(!vis[i+2]) tot--;
					vis[i]=vis[i+1]=vis[i+2]=1;
					q.push(make_pair(now,i-now+4));
					ing=0;
				}
			}
		}
		printf("Yes %d\n",q.size()+tot);
		for(int i=l-1;i>=0;i--)
		{
			if(!vis[i]){
				printf("%d %d\n",i-3,5);
				vis[i]=1;
			}
			else break;
		}
		for(int i=0;i<l;i++)
		if(!vis[i]){
			printf("%d %d\n",i+1,5);
		}
		while(!q.empty())
		{
			printf("%d %d\n",q.top().first,q.top().second);
			q.pop();
		}
	}
	
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}