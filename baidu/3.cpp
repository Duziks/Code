#include<cstring>
#include<cstdio>
#include<iostream>
#include<string>
#include<map>
using namespace std;
int n;
string a;
string ans;
int k;
int minn=0x7fffffff;
map<string,int> mp;
map<int,string> mp2;
int cnt=0;
int tot[10005];
int f[10005];
int nowi=0x7fffffff;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>k;
		if(!mp[a]){
			mp[a]=++cnt;
			mp2[cnt]=a;
			tot[cnt]+=k;
		}else{
			tot[mp[a]]+=k;
		}
		f[mp[a]]=i;
	}
	for(int i=1;i<=cnt;i++)
	{
		if(tot[i]<minn||(tot[i]==minn&&f[i]<nowi)){
			minn=tot[i];
			ans=mp2[i];
			nowi=f[i];
		}
	}
	cout<<ans<<"\n"<<1000+minn<<"\n";
	return 0;
}