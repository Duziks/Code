#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int n;
void solve()
{
	cin>>n;
	if(n==1||n==3){
		cout<<"-1\n";
		return;
	}
	if(n&1){
		for(int i=1;i<=n-5;i++)
			cout<<"3";
		cout<<"36366\n";
	}
	else{
			for(int i=1;i<=n/2-1;i++)
				cout<<"33";
			cout<<"66\n";

	}
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