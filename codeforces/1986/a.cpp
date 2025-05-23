#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
int a[4];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		sort(a,a+3);
		printf("%d\n",a[2]-a[0]);
		
	}
	return 0;
}
