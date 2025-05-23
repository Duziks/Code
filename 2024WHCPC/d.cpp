#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;

const int MOD = 998244353;
long long m,n;
long long sel;
long long power(long long a, long long b)
{
	long long ans = 1, base = a;
	while (b) {
		if (b & 1) {
			ans *= base;
			ans %= MOD;
		}
		base *= base;
		base %= MOD;
		b >>= 1;
	}
	return ans;
}
long long inv(long long x) { return power(x, MOD - 2); }
long long work(long long a,long long b)
{
	long long now=1;
	for(long long i=a;i>=a-b+1;i--)
	now=(1ll*now*i)%MOD;
	for(long long i=2;i<=b;i++)
	now=(1ll*now*inv(i))%MOD;
	return now;
}
long long work2(long long a,long long b)
{
	long long now=1;
	for(long long i=1;i<=b;i++)
	{
		now=(1ll*now*a)%MOD;
	}
	return now;
}
long long jc(long long a)
{
	long long now=1;
	for(long long i=1;i<=a;i++)
	now=(1ll*now*i)%MOD;
	return now;
}
int main()
{
	cin>>n>>m;
	if((m&1)!=(n&1)){
		n--;
	}
	sel=(n-m)/2;
//	cout<<(1ll*work2(m+1,sel)/jc(sel))%MOD<<endl;
//	cout<<(1ll*work2(m+1,sel)*inv(jc(sel))) %MOD<<endl;
	cout<<work(sel+m,m)%MOD<<endl;
//	cout<<work(5,1)<<endl;
//	cout<<6*inv(jc(sel))%MOD;
	return 0;
} 
