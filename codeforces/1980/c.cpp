#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int t;
int n,m;
int a[200005];
int b[200005];
int d[200005];
map<int,int> mp;
int o=0;
int oo=0;
int f;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		mp.clear();
		for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
		scanf("%d",&m);
		for(int i=1;i<=m;i++)
		{
			scanf("%d",&d[i]);
			mp[d[i]]++;
		}
		f=d[m];
		o=0;
		oo=0;
		for(int i=1;i<=n;i++)
		{
			if(b[i]==f) oo=1;
			if(a[i]!=b[i]){
				
				if(!mp[b[i]]){
					o=1;
					break;
				}
				mp[b[i]]--;
			}
		}
		if(oo==1&&o==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
