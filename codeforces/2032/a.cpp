#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n;
int a[1005];
int x,y;
int ans;
void solve()
{
	cin>>n;
	x=0,y=0;
	for(int i=1;i<=2*n;i++)
	{
		cin>>a[i];
		if(a[i]) x++;
		else y++;
	}
	if(x<=n) ans=x;
	else{
		ans=2*n-x;
	}
	printf("%d %d\n",x%2,ans);
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