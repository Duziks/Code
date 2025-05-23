#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
struct T{
	long long w;
	int seq;
	string s;
};T a[100005];
int n,k;
long long c[100005];
int cmp(T aa,T bb)
{
	return aa.w<bb.w;
}
int cmp1(T aa,T bb)
{
	return aa.seq<bb.seq;
}
map<string,int> mp;
vector<long long> b[100005];
int num[100005];
int tt=0;
long long minn=0x7fffffff;
int ans;
long long tmp;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>c[i];
		if(c[i]<minn) minn=c[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].w>>a[i].s;
		a[i].seq=i;
	}
	sort(a+1,a+n+1,cmp);
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<a[i].w<<" "<<a[i].s<<endl;
	// }
	for(int i=1;i<=n;i++)
	{
		if(!mp[a[i].s]){
			mp[a[i].s]=++tt;
		}
		tmp = mp[a[i].s];
		//b[tmp][1]=a[i].w;
		b[tmp].push_back(a[i].w);
	}
	sort(a+1,a+n+1,cmp1);
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<a[i].w<<" "<<a[i].s<<endl;
	// }
	// for(int i=1;i<=tt;i++)
	// {
	// 	for(int j=0;j<b[i].size();j++)
	// 	{
	// 		cout<<b[i][j]<<" ";
	// 	}
	// 	cout<<endl;

	// }
	for(int j=1;j<=n;j++)
	{
		ans=0;
		for(int i=1;i<=tt;i++)
		{
			tmp=upper_bound(b[i].begin(),b[i].end(),a[j].w)-b[i].begin();

			tmp=b[i].size()-tmp;
			if(tmp>b[i].size())
			tmp=0;
		// cout<<"tmp"<<tmp<<endl;
			if(mp[a[j].s]==i) 
				{
					ans+=min(minn-1,tmp);
				}
			else
			ans+=min(minn,tmp);
		}
		cout<<ans+1<<endl;
	}
	return 0;
}
/*
5 2
2 3
1 THU
2 PKU
3 PKU
4 THU
5 PKU
*/