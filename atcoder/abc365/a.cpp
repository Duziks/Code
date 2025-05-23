#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void slove()
{
	int n;
	scanf("%d",&n);
	if(n%4!=0){
		printf("365\n");
		return;
	}
	if(n%4==0&&n%100!=0){
		printf("366\n");
		return;
	}
	if(n%100==0&&n%400!=0){
		printf("365\n");
		return;
	}
	if(n%400==0){
		printf("366\n");
		return;
	}
	return;
}
int main()
{
	int t;
	t=1;
	// scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}