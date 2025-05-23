#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int a,b;
char num[10];
long long k;
int main()
{
	cin>>a>>b;
	k=pow(26,a);
	// cout<<k<<endl;
	b=k-b;
	for(int i=1;i<=a;i++)
	{
		num[i]=b%26;
		b/=26;
	}
	
	for(int i=a;i>=1;i--)
	{
		printf("%c",num[i]+'a');
	}
	cout<<"\n";
	return 0;
}