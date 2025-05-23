#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int a[100005];
int v[100005];
int ans[100005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>v[i];
	for(int i=1;i<=n;i++)
	{
		int j=i-1;
		int k=i+1;
		while(j>=1)
		{
			if(a[j]>v[i]) break;
			j--;
		}
		ans[j]++;
		while(k<=n)
		{
			if(a[k]>v[i]) break;
			k++;
		}
		ans[k]++;
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}干嘛 给你清理下空间nb算力 我去打猎力