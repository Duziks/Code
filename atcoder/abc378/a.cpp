#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
char a[5];
void solve()
{
	for(int i=1;i<=4;i++)
		cin>>a[i];
	sort(a+1,a+5);
	if(a[1]==a[2]&&a[3]==a[4])
	{
		cout<<2<<endl;
		return;
	}
	if(a[2]!=a[1]&&a[3]!=a[2]&&a[4]!=a[3])
		cout<<0<<endl;
	else
		cout<<1<<endl;
	return;
}
int main()
{
	int t;
	t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}