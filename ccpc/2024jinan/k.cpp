#include<cstring>
#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
char a[150][150][150];
char c;
int len[150];
int t;
string now;
map<string,int> vis;
int main()
{
	cin>>t;
	c=getchar();
	for(int i=1;i<=t;i++)
	{
		int nt=0;
		while(1)
		{
			int tt=1;
			nt++;
			while((a[i][nt][tt]=getchar())!=' '&&a[i][nt][tt]!='\n')
			{
				tt++;
			}
			// for(int j=1;j<=tt;j++)
			// {
			// 	cout<<a[i][nt][j];
			// }
			// cout<<"\n";
			if(a[i][nt][tt]=='\n')
			{
				a[i][nt][tt]='\0';
				break;
			}
			a[i][nt][tt]='\0';
			// cout<<a[i][nt]<<"\n";
		}
	}
	for(int i=1;i<=t;i++)
	{
		
	}
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=len[i];j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
/*
5
automated teller machine
active teller machine
active trouble maker
always telling misinformation
American Teller Machinery
*/