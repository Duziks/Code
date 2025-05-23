#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int n;
int a[200005];
map<int,int> mp;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(mp[a[i]]) cout<<mp[a[i]]<<" ";
		else{
			cout<<-1<<" ";
		}
		mp[a[i]]=i;
	}
	return;
}
int main()
{
	int t;
	t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}