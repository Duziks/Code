#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,k;
char a[500005];
int f[500005];
void solve()
{
	cin>>n>>k;
	cin>>a;
	if(k>n) k=n;
	int ans=0;
	for(int i=n;i<n+k;i++)
		a[i]=a[i-n];
	for(int i=0;i<n+k;i++)
		f[i]=0;
	for(int i=0;i<=n+k-7;i++){
		if(i) f[i]=f[i-1];
		if(a[i]=='n'&&a[i+1]=='a'&&a[i+2]=='n'&&a[i+3]=='j'&&a[i+4]=='i'&&a[i+5]=='n'&&a[i+6]=='g'){
			f[i]++;
		}
	}
	for(int i=n+k-7+1;i<n+k;i++)
		f[i]=f[i-1];
	// for(int i=0;i<n+k;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<"\n";
	// for(int i=0;i<n+k;i++)
	// {
	// 	cout<<f[i]<<" ";
	// }
	// cout<<"\n";
	ans=f[n-1];
	for(int i=n;i<n+k;i++){
		ans=max(ans,f[i]-f[i-n]);
	}
	cout<<ans<<"\n";
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
1
7 1
nanjing
*/