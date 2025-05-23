#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
long long a[200005];
int ans;
int l;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	ans=n-2;
	l=1;
	for(int r=3;r<=n;r++)
	{
		while(r-l>=2&&a[l]+a[l+1]<=a[r])
		l++;
		ans=min(ans,l-1+n-r);
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