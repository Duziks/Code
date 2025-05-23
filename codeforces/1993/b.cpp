#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;
long long a[200005];
// priority_queue<long long ,vector<long long>,greater<long long> > q;
priority_queue<long long  > q;
void slove()
{
	int n;
	while(!q.empty())
		q.pop();
	scanf("%d",&n);
	long long mj=-1;
	int o=0;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		if(a[i]&1&&a[i]>mj) mj=a[i];
		if(a[i]%2==0){
			o=1;
			q.push(a[i]);
		}
	}
	if(o==0||mj==-1){
		printf("0\n");
		return;
	}
	while(!q.empty())
	{
		if(q.top()<mj){
			mj=mj+q.top();
			q.pop();
			ans++;
		}
		else{
			mj=mj+q.top();
			ans++;
		}
	}
	printf("%d\n",ans);
	return;
}
int main()
{
	int t;
	// t=1;
	scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}