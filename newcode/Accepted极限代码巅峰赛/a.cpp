#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
int n;
int now;
char a[100005];
void solve()
{
	cin>>n;
	cin>>a;
	int len=strlen(a);
	now=0;
	int ans=0;
	int i=0;
	while(i<len)
	{
		now=0;
		while(i<len&&a[i]=='1'){
			now++;
			i++;
		}
		ans+=(now+1)/2;
		i++;
	}
	cout<<ans<<endl;
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