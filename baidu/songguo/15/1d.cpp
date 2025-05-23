#include<cstring>
#include<cstdio>
#include<map>
#include<iostream>
using namespace std;
int n,k;
int x[404],y[404];
map<double,int> mp;
map<double,int> m;
int ans;
double K(int a,int b)
{
	if(x[a]==x[b]) return 3.1415926535;
	return double((y[a]-y[b])*1.0/(x[a]-x[b]));
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=1;i<=n;i++)
	{
		mp.clear();
		for(int j=i+1;j<=n;j++)
		{
			mp[K(i,j)]++;
			if(mp[K(i,j)]+1>=k)
			{
				if(!m[K(i,j)]) ans++;
				m[K(i,j)]=1;
			}
		}
	}
	if(k==1) cout<<-1<<"\n";
	else{
		cout<<ans<<"\n";
	}
	return 0;
}