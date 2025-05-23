#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int r,x;
	cin>>r>>x;
	if(r>=1600&&r<=2999&&x==1||r>=1200&&r<=2399&&x==2) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}