#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n;
int a[10005];
int f[10005];
int ans[10005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ans[1]=a[1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[i]>=a[j]){
				if(f[i]<f[j]+1){
					f[i]=f[j]+1;
					ans[i]=ans[j]+a[i];
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}