#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int t;
int n,m;
int e[200005];
int k;
int fa1[200005];
int fa2[200005];
int o=0;
int find1(int a)
{
	if(fa1[a]==a) return fa1[a];
	else{
		fa1[a]=find1(fa1[a]);
		return fa1[a];
	}
}
void un1(int a,int b)
{
	a=find1(a);
	b=find1(b);
	fa1[b]=a;
}
int find2(int a)
{
	if(fa2[a]==a) return fa2[a];
	else{
		fa2[a]=find2(fa2[a]);
		return fa2[a];
	}
}
void un2(int a,int b)
{
	a=find2(a);
	b=find2(b);
	fa2[b]=a;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		o=0;
		for(int i=1;i<=n*m;i++)
		{
			fa1[i]=i;
			fa2[i]=i;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf("%d",&k);
				if(i>=2) un1(k,e[j]);
				e[j]=k;
				if(j>=2) un2(e[j],e[j-1]);
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf("%d",&k);
				if(i>=2){
					if(find1(k)!=find1(e[j])) o=1;
				}
				e[j]=k;
				if(j>=2){
					if(find2(e[j])!=find2(e[j-1])) o=1;
				}
			}
		}
		if(o==1) printf("NO\n");
		else printf("YES\n");
	}
	return 0; 
	
}
