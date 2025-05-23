#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
using namespace std;
char s[105];
int main()
{
	cin>>s;
	for(int i=0;i<strlen(s);i++)
		if(s[i]!='.') cout<<s[i];
	cout<<endl;
	return 0;
}