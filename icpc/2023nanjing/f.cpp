#include<cstring>
#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int n,m;
int k;
int now;
vector<int> a[100005];
int tot[100005];
int f[100005];
int ok;
void solve()
{
	cin>>n>>m;
	int tw=0,o=0,ok=0;
	for(int i=1;i<=m;i++)
	{
		tot[i]=0;
		f[i]=0;
	}
	for(int i=1;i<=n;i++)
		a[i].clear();
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		for(int j=1;j<=k;j++)
		{
			cin>>now;
			a[i].push_back(now);
		}
	}
	for(int i=n;i>=1;i--)
	{
		tw=0;
		for(int j=0;j<a[i].size();j++)
		{
			if(tot[a[i][j]]<2) tw=1;
		}
		if(tw==0)
		{
			int tto=0;
			for(int j=0;j<a[i].size();j++)
				tto=max(tto,f[a[i][j]]);
			cout<<"Yes\n";
			for(int j=1;j<=n-1;j++)
			{
				if(j==i) continue;
				cout<<j<<" ";
				if(j==tto) cout<<i<<" ";
			}
			cout<<n<<"\n";
			ok=1;
			break;
		}
		for(int j=0;j<a[i].size();j++)
		{
			tot[a[i][j]]++;
			f[a[i][j]]=i;
		}
		// cout<<"KKKK:";
		// for(int j=1;j<=m;j++)
		// 	cout<<tot[j]<<" ";
		// cout<<"\n";
	}
	if(ok) return;
	for(int i=1;i<=m;i++)
		tot[i]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<a[i].size();j++)
			tot[a[i][j]]++;
	}
	// cout<<"FKKK:";
	// 	for(int j=1;j<=m;j++)
	// 		cout<<tot[j]<<" ";
	// 	cout<<"\n";
	if(n>1)
	for(int i=1;i<=n;i++)
	{
		o=0;
		for(int j=0;j<a[i].size();j++)
		{
			if(tot[a[i][j]]>1) o=1;
		}
		if(!o){
			cout<<"Yes\n";
			if(i!=n)
			{
				for(int j=1;j<=n;j++)
				{
					if(j==i) continue;
					cout<<j<<" ";
				}
				cout<<i;
				cout<<"\n";
			}
			else{
				cout<<i<<" ";
				for(int j=1;j<n-1;j++)
					cout<<j<<" ";
				cout<<n-1<<endl;
			}
			ok=1;
			break;
		}
	}
	if(ok) return;
	cout<<"No\n";
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
/*
4
4 3
2 1 2
2 1 3
2 2 3
2 1 2
4 5
1 2
2 1 3
2 3 5
1 4
4 5
1 2
1 4
3 1 3 2
2 3 5
4 4
4 1 2 3 4
4 1 2 3 4
4 1 2 3 4
3 1 2 3 
*/