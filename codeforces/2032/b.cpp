#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n,k;
int a,b;
void solve()
{
	cin>>n>>k;
	a=k-1;
	b=n-k;
	if(a%2!=b%2||(a!=b&&(!a||!b))){
		cout<<-1<<"\n";
		return;
	}
	cout<<(n-abs(a-b))<<endl;
	if(a>b)
	{
		for(int i=1;i<=b;i++)
			cout<<i<<" ";
		cout<<k<<" ";
		for(int i=k+1;i<=n;i++)
			cout<<i<<" ";
		cout<<"\n";
	}
	else if(a==b){
		for(int i=1;i<=n;i++)
			cout<<i<<" ";
		cout<<"\n";
	}else{
		for(int i=1;i<=n-(b-a);i++)
			cout<<i<<" ";
		cout<<"\n";
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