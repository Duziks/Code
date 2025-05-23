#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int n;
int a[55];
int ok;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ok=1;
	for(int i=1;i<n;i++)
		if(abs(a[i+1]-a[i])==5||abs(a[i+1]-a[i])==7) continue;
	else {
		ok=0;
		break;
	}
	if(ok ) cout<<"YES\n";
	else cout<<"NO\n";
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
