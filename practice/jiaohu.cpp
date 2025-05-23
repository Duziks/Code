#include<cstring>
#include<iostream>
#include<cstring>
using namespace std;
int now;
int pre;
int ans[1005];
void solve(int n)
{
	for(int i=n;i>=2;i--)
	{
		cout<<"?"<<" "<<1<<" "<<i<<endl;
		fflush(stdout);
		cin>>now;
		ans[i+1]=pre-now;
		pre=now;
	}
	cout<<"?"<<" "<<2<<" "<<3<<endl;
	fflush(stdout);
	cin>>now;
	ans[2]=now-ans[3];
	ans[1]=pre-ans[2];
	cout<<"! ";
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return;
}
int main()
{
	int n;
	// while(1)
	{
		cin>>n;
		solve(n);
	}
	return 0;
}