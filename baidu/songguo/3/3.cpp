#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int a[1000006];
int b[1000006];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	int fr=n/2+1;
	while(fr<=n&&a[fr]==b[fr]) fr++;
	int j=1;
	while(fr<=n&&a[fr]==b[j]){
		fr++;
		j++;
	}
	if(fr>n) printf("Yes\n");
	else printf("No\n");
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