#include<cstring>
#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int n,k;
int a[100005];
double now;
void out(double aa)
{
	double nn=aa*1.0/k;
	if(nn>=1024.0){
		nn=(nn/1024.0);
		cout<<fixed<<setprecision(6)<<nn<<" MiBps\n";
	}
	else cout<<fixed<<setprecision(6)<<nn<<" KiBps\n";
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=k;i++)
		now+=a[i];
	out(now);
	for(int i=k+1;i<=n;i++)
	{
		now-=a[i-k];
		now+=a[i];
		out(now);
	}
	return 0;
}