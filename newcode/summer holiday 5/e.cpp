#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
#include<array>
using namespace std;
void slove()
{
	int n;
	int a[100005];
	int b[100005];
	int ans=0;
	int eq=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(int i=1;i<=n;i++)
	{
		if(a[i]>b[i]) ans++;
		if(a[i]==b[i]) eq++;
	}
	ans+=(eq&1?eq/2+1:eq/2);
	printf("%d\n",ans);
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	// t=1;
	while(t--){
		slove();
	}
	return 0;
}