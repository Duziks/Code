#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int a,b;
char c;
long long ans=0;
int main()
{
	cin>>a;
	cin>>c;
	cin>>b;
	for(int i=a;i<=b;i++)
		if(i%6==0) ans+=i;
	cout<<ans<<endl;
	return 0;
}