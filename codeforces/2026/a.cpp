#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
int x,y,k;
int a;
void solve()
{
	cin>>x>>y>>k;
	a=min(x,y);
	cout<<0<<" "<<0<<" "<<a<<" "<<a<<endl;
	cout<<0<<" "<<a<<" "<<a<<" "<<0<<endl;
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