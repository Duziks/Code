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
	string s;
	int seq;
	int ans;
};T a[100005];
long long n,k;
long long c[100005];
long long minn;
int now;
int cmp(T aa,T bb)
{
	return aa.w>bb.w;
}
int cmp1(T aa,T bb)
{
	return aa.seq<bb.seq;
}
map<string,int> mp;
int main()
{
	cin>>n>>k;
	minn=0x7fffffff;
	for(int i=1;i<=k;i++){
		cin>>c[i];
		minn=min(minn,c[i]);
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].w>>a[i].s;
		a[i].seq=i;
	}
	sort(a+1,a+n+1,cmp);
	now=1;
	for(int i=1;i<=n;i++)
	{
		if(mp[a[i].s]>=minn) a[i].ans=now-1;
		else
		a[i].ans=now;
		if(!mp[a[i].s]){
			mp[a[i].s]=1;
			now++;
			continue;
		}
		mp[a[i].s]++;
		if(mp[a[i].s]<=minn){
			now++;
		}
	}
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<a[i].ans<<endl;
	// }
	sort(a+1,a+n+1,cmp1);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].ans<<endl;
	}
	return 0;
}