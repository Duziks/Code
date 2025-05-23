#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
int n;
char a[3][200005];
int ans;
void slove()
{
	scanf("%d",&n);
	cin>>a[1];
	cin>>a[2];
	ans=0;
	for(int i=1;i<n-1;i++)
	{
		if(a[1][i]=='.'&&a[1][i-1]=='.'&&a[1][i+1]=='.'&&a[2][i]=='.'&&a[2][i-1]=='x'&&a[2][i+1]=='x')
			ans++;
		if(a[1][i]=='.'&&a[1][i-1]=='x'&&a[1][i+1]=='x'&&a[2][i]=='.'&&a[2][i-1]=='.'&&a[2][i+1]=='.')
			ans++;
	}
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