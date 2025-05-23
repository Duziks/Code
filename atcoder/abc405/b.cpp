#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n,m;
int a[1005];
int vis[1005];
int tot;
int ans;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(!vis[a[i]])
		{
			vis[a[i]]=1;
			tot++;
			if(tot==m) ans=i;
		}
	}
	if(tot<m)
		cout<<0<<endl;
	else
	cout<<n-ans+1<<endl;
	return 0;
}