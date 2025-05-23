#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char a[15][15];
int x,y;
int main()
{
	for(int i=0;i<9;i++)
		cin>>a[i];
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
		{
			if(a[i][j]=='8'&&i>0&&i<8&&j>0&&j<8) {
				x=i;
				y=j;
				break;
			}
		}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(i==x&&j==y){
				printf("8");
			}
			else printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}