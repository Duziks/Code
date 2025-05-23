#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n&1) cout<<"Kosuke"<<endl;
	else cout<<"Sakurako"<<endl;
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