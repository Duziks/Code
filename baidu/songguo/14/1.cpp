#include<cstring>
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int n;
int a[1005];
int maxn=0;
int main()
{
	cin >> n;
	for(int i = 1; i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int now=1;
		for(int j=i-1;j>=1;j--)
		{

			if(a[j]<=a[j+1]) now++;
			else break;
		}
		for(int j=i+1;j<=n;j++)
		{

			if(a[j]<=a[j-1]) now++;
			else break;
		}
		maxn=max(maxn,now);
	}
	cout<<maxn<<"\n";
	return 0;
}