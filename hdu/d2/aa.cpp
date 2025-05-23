#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n,l,r;
int a[500005];
long long tot;
int main()
{
	scanf("%d%d%d",&n,&l,&r);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		a[i]--;
		tot+=a[i];
	}
	
}