#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char a[10];
int main()
{
	cin>>a[0];
	cin>>a[2];
	cin>>a[4];
	if(a[0]=='<'&&a[2]=='<'&&a[4]=='<'||a[0]=='>'&&a[2]=='>'&&a[4]=='>'){
		cout<<"B"<<endl;
		return 0;
	}
	if(a[0]=='<'&&a[2]=='<'&&a[4]=='>'||a[0]=='>'&&a[2]=='>'&&a[4]=='<'){
		cout<<"C"<<endl;
		return 0;
	}
	if(a[0]=='>'&&a[2]=='<'&&a[4]=='<'||a[0]=='<'&&a[2]=='>'&&a[4]=='>'){
		cout<<"A"<<endl;
		return 0;
	}
	return 0;
}