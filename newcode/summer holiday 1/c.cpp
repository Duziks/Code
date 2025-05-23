#include<cstring>
#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int q;
int t;
long long v;
long long now;
long long mod=1000000007;
stack<int> sta;
int main()
{
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		scanf("%d%lld",&t,&v);
		for(int j=1;j<=t;j++)
		{
			now=(now-(1ll*sta.top()*sta.size())%mod)%mod;
			// printf("- %d * %d\n",sta.top(),sta.size());
			if(now<0) now+=mod;
			sta.pop();
		}
		sta.push(v);
		now=(now+(1ll*sta.top()*sta.size())%mod)%mod;
		// printf("+ %d * %d\n",sta.top(),sta.size());
		printf("%lld\n",now);
	}
	
	return 0;
}
/*
2
0 1000000008
1 1000000009

*/