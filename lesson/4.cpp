#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
double now;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
		now+=(pow(-1,i)/(2.0*i+1.0));
	cout<<4.0*now<<endl;
	return 0;
}