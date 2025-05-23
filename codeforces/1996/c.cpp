#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
void slove()
{
	int n;
	int q;
	char a[200005];
	char b[200005];
	int l,r;
	// map<int,int> mp;
	// map<int,int> vis;
	int mp[255];
	int vis[255];
	scanf("%d%d",&n,&q);
	cin>>a;
	cin>>b;
	for(int i=1;i<=q;i++)
	{
		int now=0;
		scanf("%d%d",&l,&r);
		l--;r--;
		// mp.clear();
		memset(mp,0,sizeof(mp));
		for(int i=l;i<=r;i++)
			mp[a[i]]++;
		for(int i=l;i<=r;i++)
		{
			if(!mp[b[i]]) now++;
			if(mp[b[i]]) mp[b[i]]--;
		}
		// vis.clear();
		memset(vis,0,sizeof(vis));
		for(int i=l;i<=r;i++)
		{
			// printf("%d\n",mp[a[i]]);
			if(!vis[a[i]]){
				now+=mp[a[i]];
			vis[a[i]]=1;
			}
		}

		// printf("now:%d\n",now);
		printf("%d\n",now/2);
	}
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
/*
3
5 3
aaaaa
bbbbb

1 4
2 3

*/