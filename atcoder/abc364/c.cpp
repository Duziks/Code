#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
int n;
long long x,y;
long long a[200005];
long long b[200005];
long long now;
int na,nb;
void slove()
{
	scanf("%d%lld%lld",&n,&x,&y);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	for(int i=1;i<=n;i++)
		scanf("%lld",&b[i]);
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=n;i>=1;i--)
	{
		// printf("%d ",a[i]);
		now+=a[i];
		if(now>x){
			na=n-i+1;
			break;
		}
	}
	if(na==0) na=n;
	now=0;
	for(int i=n;i>=1;i--)
	{
		now+=b[i];
		if(now>y){
			nb=n-i+1;
			break;
		}
	}
	if(nb==0) nb=n;
	// if(min(na,nb)==0) printf("%d\n",n);
	// else
	printf("%d\n",min(na,nb));
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