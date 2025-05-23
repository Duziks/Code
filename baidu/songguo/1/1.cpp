#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int x,y;
int a[5][5];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		a[x][y]=(i&1)+1;
		for(int j=1;j<=2;j++)
		{
			for(int k=1;k<=2;k++)
			{
				if(a[j][k]==2) cout<<"X|";
				if(a[j][k]==1) cout<<"O|";
				if(a[j][k]==0) cout<<" |";
			}
			if(a[j][3]==2) cout<<"X\n";
			if(a[j][3]==1) cout<<"O\n";
			if(a[j][3]==0) cout<<" \n";
			cout<<"-----\n";
		}
		for(int k=1;k<=2;k++)
			{
				if(a[3][k]==2) cout<<"X|";
				if(a[3][k]==1) cout<<"O|";
				if(a[3][k]==0) cout<<" |";
			}
			if(a[3][3]==2) cout<<"X\n";
			if(a[3][3]==1) cout<<"O\n";
			if(a[3][3]==0) cout<<" \n";
	}
	return 0;
}