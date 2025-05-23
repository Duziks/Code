#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
long long a[100005];
long long now;
int main()
{
	cin>>n;
	now=1500;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		now+=a[i];
		if(now>=4000){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"-1"<<endl;
	return 0;
}