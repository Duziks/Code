#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n;
int m;
int k;
int f[100005];
int num;
int main()
{
	cin>>n;
	num=n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			cin>>k;
			f[k]++;
		}
	}
	num=0;
	for(int i=1;i<=n;i++)
		if(f[i]<n-1) num++;
	cout<<num<<" ";
	for(int i=1;i<=n;i++)
		if(f[i]<n-1) cout<<i<<" ";
	cout<<"\n";
	return 0;
}