#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int n;
string name;
int a[100005];
void solve()
{
	cin>>n>>name;
	int tot=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		if(a[i]!=i) tot++;
	if(tot==2&&name=="Alice"||n==2||n==3&&(name=="Alice"&&tot==2||name=="Bob"&&tot==3))
		cout<<"Alice"<<"\n";
	else cout<<"Bob\n";
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