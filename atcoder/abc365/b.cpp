#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
pair<int,int> a[10005];
void slove()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{

		scanf("%d",&a[i].first);
		a[i].second=i;
	}
	sort(a+1,a+1+n);
	for(int i=n-1;i>=1;i--)
		if(a[i].first!=a[i+1].first){
			printf("%d\n",a[i].second);
			return;
		}
	return;
}
int main()
{
	int t;
	t=1;
	// scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}