#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
#include<array>
using namespace std;
int n;
int x,y;
int a[200005];
int b[200005];
int now;
int na,nb;
int f[10002][10002];
void slove()
{
	scanf("%d%d%d",&n,&x,&y);
	// vector<vector<int>> f(x+1, vector<int>(y+1));
	for(int i=1;i<=n;i++)
		scanf("%d%d",&a[i],&b[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=x;j>=a[i];j--)
		{
			for(int k=y;k>=b[i];k--)
			{
				f[j][k]=max(f[j][k],f[j-a[i]][k-b[i]]+1);
			}
		}
	}
	if(f[x][y]<n) f[x][y]++;
	printf("%d\n",f[x][y]);
	return;
}
int main()
{
	int t;
	// scanf("%d",&t);
	t=1;
	while(t--){
		slove();
	}
	return 0;
}