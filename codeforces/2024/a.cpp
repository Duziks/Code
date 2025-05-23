#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
void solve()
{
	long long a,b;
	cin>>a>>b;
	if(a>=b) cout<<a<<endl;
	else{
		cout<<max(0*1ll,2*a-b)<<endl;
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