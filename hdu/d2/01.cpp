#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t;
int n;
int s,y;
int a,b,c;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a=4;
		b=2;
		c=0;
		s=n/3;
		y=n%3;
		if(s==0)
		{
			a=0;
			b=0;
		}
		if(s==1)
		{
			a=3;
			b=0;
		}
		if(s>=3)
		{
			a+=(s-2);
			b+=(s-2);
			c+=(s-2);
		}
		a+=y;
		for(int i=1;i<=a;i++)
			printf("%d %d\n",1,1+i);
		for(int i=1;i<=b;i++)
			printf("%d %d\n",2,2+i);
		for(int i=1;i<=c;i++)
			printf("%d %d\n",3,3+i);
	}
	return 0;
}