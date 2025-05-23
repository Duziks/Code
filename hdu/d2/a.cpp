#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t;
char a[205];
int n;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
			cin>>a;
			int j=0;
			while(a[j]!=':')
			{
				cout<<a[j];
				j++;
			}
			cout<<endl;
			for(j;j<strlen(a);j++)
			{
				if(a[j]=='/'&&a[j-1]=='/'&&a[j-2]==':'){
					break;
				}
			}
			j++;
			while(j<strlen(a))
			{
				if(a[j]=='/') cout<<endl;
				else cout<<a[j];
				j++;
			}
			
	}
	return 0;
}
/*
2
s3://hdu-oj-bucket/problem=1/type=data/
s3://hdu-oj-bucket/problem=1/type=data/
*/