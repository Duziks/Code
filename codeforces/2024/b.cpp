#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[200005];
void solve()
{
	long long n,k;
	long long ans=0;
	long long now=0;
	int tt;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	int i=1;
	while(i<=n)
	{
		if(k<=(n-i+1)*(a[i]-a[i-1])){
			ans+=(now+k);
			break;
		}
		else{
			ans+=(now+(a[i]-a[i-1])*(n-i+1));
			k-=(a[i]-a[i-1])*(n-i+1);
		}
		now=1;
		i++;
		while(a[i]==a[i-1]){
			i++;
			now++;
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