#include<cstring>
#include<iostream>
#include<iostream>
using namespace std;
int n;
void solve()
{
	cin>>n;
	if(n==2){
		cout<<"1 0\n";
		return;
	}
	if(n==1||n%4==0){
		cout<<"impossible\n";
		return;
	}
	int now=4;
	cout<<"1 0 ";
	for(int i=2;i<n;i++)
	{
		if(i==now-1){
			cout<<i+1<<" "<<i<<" ";
			i++;
			now+=4;
		}
		else
		cout<<i<<" ";
	}
	cout<<"\n";
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