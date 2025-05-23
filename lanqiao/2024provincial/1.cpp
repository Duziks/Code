#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int num[11]={13,1,2,3,5,4,4,2,2,2};
int now=0;
int ans=0;
int main()
{
	for(int i=2000;i<=2023;i++)
	{
		if(i%4==0) mon[2]=29;
		for(int j=1;j<=12;j++)
		{
			for(int k=1;k<=mon[j];k++)
			{
				now=0;
				now+=num[j%10];
				now+=num[j/10];
				now+=num[k/10];
				now+=num[k%10];
				now+=num[i%10];
				now+=num[i/10%10];
				now+=num[i/100%10];
				now+=num[i/1000];
				if(now>50) ans++;

			}
		}
		mon[2]=28;
	}
	mon[2]=29;
	for(int j=1;j<=3;j++)
	{
		for(int k=1;k<=mon[j];k++)
			{
				now=0;
				now+=num[j%10];
				now+=num[j/10];
				now+=num[k/10];
				now+=num[k%10];
				now+=num[2];
				now+=num[0];
				now+=num[2];
				now+=num[4];
				if(now>50) ans++;

			}
	}
	for(int k=1;k<=13;k++)
	{
		now=0;
		now+=num[4];
		now+=num[0];
		now+=num[k/10];
		now+=num[k%10];
		now+=num[2];
		now+=num[0];
		now+=num[2];
		now+=num[4];
		if(now>50) ans++;
	}
	cout<<ans<<endl;
	return 0;
}