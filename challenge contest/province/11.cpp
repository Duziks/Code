#include<cstring>
#include<cstdio>
#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int l;
int s,t,m;
int k;
map<int,int> mp;
int fro,too;
int minn=0x7fffffff;
int f[1000005];
int ans=0x7fffffff;
int main()
{
	cin>>l;
	cin>>s>>t>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>k;
		mp[k]=1;
	}
	for(int i=1;i<s;i++)
		f[i]=0x7fffffff;
	if(mp[0]) f[0]=1;
	for(int i=s;i<l+t;i++)
	{
		fro=max(0,i-t);
		too=max(0,i-s);
		minn=0x7fffffff;
		for(int j=fro;j<=too;j++)
		{
			minn=min(minn,f[j]);
		}
		f[i]=minn;
		if(mp[i]) f[i]++;
	}
	for(int i=l;i<l+t;i++)
		ans=min(f[i],ans);
	cout<<ans<<"\n";
	return 0;
}