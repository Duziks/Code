#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
char a[1000005];
int f[1000005][2];
void solve()
{
	cin>>n;
	cin>>a;
	int len=strlen(a);
	f[0][0]=1;
	for(int i=1;i<n;i++)
	{
		if(a[i-1]=='1'){
			f[i][0]=min(f[i-1][0],f[i-1][1])+1;
			f[i][1]=f[i-1][0];
		}
		else{
			f[i][0]=f[i-1][0]+1;
			f[i][1]=min(f[i-1][0],f[i-1][1]);
		}
	}
	cout<<min(f[n-1][0],f[n-1][1])<<"\n";
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