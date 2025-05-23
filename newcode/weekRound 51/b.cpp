#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
char a[105][105];
int now;
int main()
{
	printf("%d\n",(-11)%10);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<strlen(a[i]);j++)
			now=(now+a[i][j]-'0')%3;
	}
	if(!now) printf("YES\n");
	else printf("NO\n");
	return 0;
}