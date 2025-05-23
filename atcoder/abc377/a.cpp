#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
char a[100];
void solve()
{
	cin>>a;
	sort(a,a+3);
	if(a[0]=='A'&&a[1]=='B'&&a[2]=='C') cout<<"Yes\n";
	else printf("No\n");
	return;
}
int main()
{
	int t;
	// cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}