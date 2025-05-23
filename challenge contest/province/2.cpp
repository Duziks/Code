#include<cstring>
#include<cstdio>
#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int n;
int a[1000005];
int minn=0x7fffffff;
int f[1000005];
int po;
int ans;
int now;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<minn){
			minn=a[i];
			po=i;
		}
	}
	now=1;
	ans+=1;
	for(int i=po+1;i<=n;i++){
		if(a[i]>a[i-1]) now++;
		if(a[i]<a[i-1]) now--;
		f[i]=now;
		ans+=now;
	}
	now=1;
	for(int i=po-1;i>=1;i--){
		if(a[i]>a[i+1]) now++;
		if(a[i]<a[i+1]) now--;
		f[i]=now;
		ans+=now;
	}
	for(int i=1;i<=n;i++)
		cout<<f[i]<<" ";
	cout<<ans<<"\n";
	return 0;
}