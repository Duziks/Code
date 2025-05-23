#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
using namespace std;
int n,k;
int b;
int now;
int ans;
void solve()
{
	cin>>n>>k;
	ans=0;
	now=0;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		if(b>=k){
			now+=b;
		}
		else{
			if(now&&b==0)
			{
				ans++;
				now--;
			}
		}
	}
	cout<<ans<<endl;
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