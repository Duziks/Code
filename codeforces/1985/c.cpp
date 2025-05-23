#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int t;
int n;
long long now;
long long k;
int ans;
priority_queue<int> q;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(!q.empty()) q.pop();
		ans=0;
		now=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&k);
			if(i==1){
				if(k==0) ans++;
				q.push(k);
			}
			if(i>1)
			{
				if(k>q.top()){
					
					now+=q.top();
					q.push(k);
				}
				else{
					now+=k;
					q.push(k);
				}
				if(q.top()==now){
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
