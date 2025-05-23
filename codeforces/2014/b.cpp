#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
using namespace std;
long long n,k;

void solve()
{
	cin>>n>>k;
	if(n&1){
		if(k%4==1||k%4==2)cout<<"NO\n";
		else cout<<"YES\n";
	}
	else{
		if(k%4==2||k%4==3)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}