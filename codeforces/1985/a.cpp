#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t;
char s[5],b[5]; 
char c;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		cin>>s>>b;
		 c=s[0];
		 s[0]=b[0];
		 b[0]=c;
		 cout<<s<< " "<<b<<endl;
	}
	return 0;
} 
