#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
int n;
int a[55];
int now;
int o=0;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		now=0;
		o=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a+1,a+n+1);
		now=1;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]==a[i+1]) now++;
			if(a[i]!=a[i+1]) {
				if(now&1){
					printf("YES\n");
					o=1;
					break;
				}
				now=1;
			}
		}
		if(o==0) printf("NO\n");
	}
	return 0;
}
/*
1
5
5 5 4 4 4 
*/