#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int a[100005];
long long pre[100005];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		pre[i]=pre[i-1]+a[i];
	int la=0;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		// printf(":%d %d\n",i,la);
		for(int j=la;j<i;j++)
		{
			if(pre[j]==pre[i])
			{
				ans++;
				la=i;
				break;
			}
		}
	}
	cout<<ans<<endl;
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