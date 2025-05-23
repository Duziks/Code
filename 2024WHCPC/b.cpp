#include<cstring>
#include<cstdio>
#include<iostream> 
#include<algorithm>
#include<cmath>
using namespace std;
long long a[500005]; 
int n;
long long ans=1;
long long mod=998244353;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i]; 
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		ans=(ans*max((long long)0,a[i]-i+1)%mod)%mod;
	}
	cout<<ans<<endl;
	return 0; 
}
