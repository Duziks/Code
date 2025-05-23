#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
int n,f,k;
int a[105];
int now;
int cmp(int aa,int bb)
{
	return aa>bb;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&f,&k);
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		now=a[f];
		sort(a+1,a+n+1,cmp);
		if(a[k]>now){
			printf("NO\n");
		}
		if(a[k]<now){
			printf("YES\n");
		}
		if(a[k]==now){
			if(a[k+1]==now) printf("MAYBE\n");
			else printf("YES\n");
		}
		
	}
	return 0;
}
