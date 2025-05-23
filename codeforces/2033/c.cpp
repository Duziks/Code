#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int a[100005];
int l,r,x,y;
int tt;
int tmp;
int ans;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	ans=0;
	l=r=x=y=0;
	for(int i=n/2;i>=1;i--)
	{
		tt=n-i+1;
		if(a[i]==a[i-1]) l++;
		if(a[i]==a[i+1]) l++;
		if(a[tt]==a[tt+1]) r++;
		if(a[tt]==a[tt-1]) r++;
		if(a[i]==a[tt+1]) x++;
		if(a[i]==a[tt-1]) x++;
		if(a[tt]==a[i-1]) y++;
		if(a[tt]==a[i+1]) y++;
		if((l+r)>(x+y)) {
			tmp=a[i];
			a[i]=a[tt];
			a[tt]=tmp;
		}
	}
	for(int i=2;i<=n;i++)
		if(a[i]==a[i-1]) ans++;
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