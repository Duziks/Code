#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
void slove()
{
	int n;
	long long l,d;
	long long a[100005];
	int a1;
	int ok=0;
	scanf("%d%lld%lld",&n,&l,&d);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	a1=a[1];
	sort(a+1,a+n+1);
	if(a1<l&&a[3]<l&&a[n]-a[1]>d) ok=1;
	if(a1>=l&&a[3]<l&&a1-a[1]>d) ok=1;
	if(ok) printf("Yes\n");
	else printf("No\n");
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