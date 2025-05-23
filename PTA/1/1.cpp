#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a,b,pa,pb;
int main()
{
	cin>>a>>b;
	for(int i=1;i<=3;i++)
	{
		int k;
		cin>>k;
		if(k) pb++;
		else pa++;
	}
	if(a>b&&pa||a<b&&pa==3) {
		printf("The winner is a: %d + %d\n",a,pa);
	}
	if(a<b&&pb||a>b&&pb==3) {
		printf("The winner is b: %d + %d\n",b,pb);
	}
	return 0;
}