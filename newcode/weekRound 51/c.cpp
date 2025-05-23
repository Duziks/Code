#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int x,y,t,a,b,c;
double a1,a2;
int main()
{
	scanf("%d%d%d%d%d%d",&x,&y,&t,&a,&b,&c);
	if(x<=t){
		a1=(100-x)*1.0/c;
		printf("%lf\n",a1);
		return 0;
	}
	a1=(x-t)*1.0/y+(100-t)*1.0/c;
	a2=(100-x)*1.0/b;
	if(a1<a2) printf("%lf\n",a1);
	else printf("%lf\n",a2);
	return 0;
} 