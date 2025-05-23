#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
#include<algorithm>
#include<cmath>
using namespace std;

int n;
long long a[200005];
long long ab;
long long tot=0;
void solve()
{
	cin>>n;
	
	ab=0;
	tot=0;
	for(int i=1;i<=n;i++)
	{

		cin>>a[i];
		tot+=a[i];
	}
	if(n<=2){
		printf("-1\n");
		return;
	}
	sort(a+1,a+n+1);
	ab=a[n/2+1];
	long long tmp=1ll*2*n*ab;
	if(tmp<tot) printf("0\n");
	else printf("%lld\n",tmp-tot+1);
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}