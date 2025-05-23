#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
const int N=31;
const int MAXN=100007;
int n;
int q;
int x,y;
int flag=0;
int a[1005][1005];
int sam[3][1005];
int vis[100008];
int l[10005];
long long hs(char s[],int len)
{
	ll now=0;
	for(int i=1;i<=len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a';
		now=(now*1ll*N%MAXN+s[i])%MAXN;
	}
	for(int i=1;i<=len;i++)
		printf("%c",s[i]);
	printf("\n");
	printf("now:%d\n",now);
	return now;
}
int chec(char c)
{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z') return 1;
	else return 0;
}
int main()
{
	scanf("%d",&n);
	int nn=n;
	char c;
	c=getchar();
	while(1)
	{
		while(!chec(c))
		{
			if(c=='#') n--;
			if(n<=0){
				flag=1;
				break;
			}
			c=getchar();
		}
		if(flag) break;
		int t=0;
		char s[15];
		while(chec(c))
		{	
			s[++t]=c;
			c=getchar();
		}
		a[nn-n+1][++l[nn-n+1]]=hs(s,t);
	}
	printf("------------\n");
	for(int i=1;i<=nn;i++)
		printf("%d ",l[i]);
	printf("\n");
	// for(int i=1;i<=nn;i++)
	// {
	// 	for(int j=1;j<=a[i][a[i][0]];j++)
	// 		printf("%d ",a[i][j]);
	// 	printf("\n");
	// }
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d%d",&x,&y);
		int tot=l[x]+l[y];
		int sum=0;
		memset(sam,0,sizeof(sam));
		memset(vis,0,sizeof(vis));
		for(int i=1;i<=l[x];i++)
		{
			for(int j=1;j<=l[y];j++)
			{
				if(a[x][i]==a[y][j]){
					sam[1][i]=sam[2][j]=1;
					if(!vis[a[x][i]]){
						sum++;
						vis[a[x][i]]=1;
					}
				}

			}
		}
		for(int i=1;i<=l[x];i++)
			if(sam[1][i]) tot--;
		for(int i=1;i<=l[y];i++)
			if(sam[2][i]) tot--;
		printf("%.1f%\n",(float)100.0*sum/(sum+tot*1.0));
	}
}
/*
3
aaa bbb ccc
#
bbb ccc ddd
#
aaa2 ccc eee
is at ddd@fff
#
2
1 2
1 3
*/