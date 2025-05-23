#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int now[55];
int ans[55];
int tt=0;
int o=0;
void solve()
{
	cin>>n;
	o=0;
	if(n==0)
	{
		cout<<"NO\n";
		return;
	}
	tt=0;
	if(n%2==0){
		n++;
		o=1;
	}
	while(n)
	{
		now[++tt]=n&1;
		n>>=1;
	}
	// cout<<"tt:"<<tt<<endl;
	// for(int i=1;i<=tt;i++)
	// 	cout<<now[i]<<endl;
	for(int i=1;i<=32;i++)
		ans[i]=-1;
	ans[32]=1;
	for(int i=2;i<=tt;i++)
		if(now[i]) ans[i-1]=1;
	
	if(o==1)
	{
		if(ans[1]==1) ans[1]=0;
		else{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	for(int i=1;i<=32;i++)
	{
		cout<<ans[i]<<" ";
		if(i%8==0) cout<<"\n";
	}
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
/*
1073741823
*/