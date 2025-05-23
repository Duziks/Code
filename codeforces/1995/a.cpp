#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int t;
int n,k;
int ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		ans=0;
		if(k>=n){
			ans++;
			k-=n;
			n--;
		}
		while(n!=0&&k>=n)
		{
			k-=n;
			ans++;
			if(k<n) break;
			k-=n;
			ans++;
			n--;
			if(n==0) break;
		}
		if(k) ans++;
		printf("%d\n",ans);
	}
	return 0;
}