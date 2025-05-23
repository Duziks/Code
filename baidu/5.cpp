#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
char a[100005];
char ans='A';
int main()
{
	cin>>a;
	int len=strlen(a);
	for(int i=0;i<len;i++)
		if(a[i]>ans) ans=a[i];
	cout<<ans<<endl;
	return 0;
}