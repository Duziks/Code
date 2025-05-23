#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
void slove()
{
	int n,m,a,b;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	if(a==1&&b==1)
	{
		if((n&1)&&(m&1)) printf("No\n");
		else printf("Yes\n");
	}
	if(a==0&&b==1)
	{
		if(((n%2==0||m%2==0)&&(n>=2&&m>=2))||n==2&&m==1||n==1&&m==2) printf("Yes\n");
		else printf("No\n");
	} 
	if(a==1&&b==0)
	{
		if(n==1&&m%2==0||m==1&&n%2==0) printf("Yes\n");
		else printf("No\n");
	}
	if(a==0&&b==0)
	{
		if(n==2&&m==1||n==1&&m==2) printf("Yes\n");
		else printf("No\n");
	}
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		slove();
	}
	return 0;
}