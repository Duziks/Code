#include<cstring>
#include<cstdio>
#include<map>
#include<iostream>
using namespace std;
map<pair<double,int>,int> mp;
int n,k;
int x[404],y[404];
int inf[2];
double kk;
int ans;
int ok;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
		if(x[i]==0&&y[i]==0){
			k--;
		}
		
	}
	for(int i=1;i<=n;i++)
	{
		if(x[i]==0&&y[i]==0) continue;
		if(x[i]==0&&y[i]!=0)
		{
			inf[y[i]>0]++;
			if(inf[y[i]>0]==k) ans++;
			continue;
		}
		kk=double(y[i]*1.0/x[i]);
		mp[make_pair(kk,y[i]>0)]++;
		if(mp[make_pair(kk,y[i]>0)]==k) ans++;
	}
	if(k==0) cout<<"-1\n";
	else
	cout<<ans<<"\n";
	return 0;
}