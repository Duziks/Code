#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char a[100005];
int b[100005];
int t;
int n;
int cnt;
long long ans=0;
long long C(int x,int y)
{
	long long f=1;
	for(int i=x;i>=x-y+1;i--)
		f*=i;
	for(int i=2;i<=y;i++)
		f/=i;
	return f;
}
int main()
{
	cin>>a;
	n=strlen(a);
	cnt=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=a[i-1]&&a[i]!=a[i-1]+1)
		{
			b[++t]=cnt;
			cnt=0;
		}
		cnt++;
	}
	for(int i=1;i<t;i++)
		ans+=b[i]*b[i+1];
	for(int i=1;i<=t;i++)
		ans+=C(b[i]+1,2);
	cout<<ans<<"\n";
	return 0;
}