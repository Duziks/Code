#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int t;
int x,y;
int ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d%d",&x,&y);
		while(x>0||y>0)
		{
			if(x%2!=y%2) break;
//			printf("d:%d %d\n",x%2,y%2);
			x>>=1;
			y>>=1;
			ans++;
		}
//		if(x==0||y==0) ans++;
		printf("%d\n",1<<ans);
		
	}
	return 0;
}
