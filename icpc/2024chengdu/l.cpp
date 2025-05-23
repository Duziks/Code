#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int a,b,c;
int main()
{
	cin>>a>>b>>c;
	cout<<100<<endl;
	for(int i=1;i<=50;i++)
		cout<<a<<" ";
	for(int i=51;i<=95;i++)
		cout<<b<<" ";
	for(int i=96;i<=99;i++)
		cout<<c<<" ";
	cout<<c+1<<endl;
	return 0;
}