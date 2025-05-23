#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int n;
ll a[20005];
int check(ll now)
{
	int can=0;
	int i=1;
	while(i<=n)
	{
		if(i+1<=n&&(a[i+1]-a[i]<=now)){
			i+=2;
		}
		else{
			if(!can){
				if(now<1) return 0;
				can=1;
				i++;
			}
			else{
				return 0;
			}
		}
	}
	return 1;
}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n==1){
		cout<<1<<endl;
		return;
	}
	sort(a+1,a+n+1);
	ll l=0,r=-1;
	ll ans;
	if(n==1) r=1;
	else{
		ll m=0;
		for(int i=1;i<n;i++)
			if(a[i+1]-a[i]>m) m=a[i+1]-a[i];
		r=m;
	}
	ans=r;
	while(l<=r)
	{
		ll mid=l+r>>1;
		if(check(mid)){
			r=mid-1;
			ans=mid;
		}
		else{
			l=mid+1;
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