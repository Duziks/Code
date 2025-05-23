#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int n;
int a[1005],b[1005],c[1005];
int m;
int na,nb,nc;
int aa,bb,cc;
int ans;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&c[i]);
	na=nb=nc=1;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d",&aa,&bb,&cc);
		na=(na+aa-1)%n+1;
		nb=(nb+bb-1)%n+1;
		nc=(nc+cc-1)%n+1;
		// printf("------%d %d %d\n",na,nb,nc);
		if(a[na]==b[nb]&&b[nb]==c[nc]) ans+=200;
		else{
			if(a[na]==b[nb]||b[nb]==c[nc]||a[na]==c[nc])
				ans+=100;
		}
		if(a[na]+1==b[nb]&&b[nb]+1==c[nc]) ans+=200;
		else{
			int x,y,z,tm;
			x=a[na];
			y=b[nb];
			z=c[nc];
			if(x>y){
				tm=x;
				x=y;
				y=tm;
			}
			if(y>z){
				tm=z;
				z=y;
				y=tm;
			}
			if(x>y){
				tm=x;
				x=y;
				y=tm;
			}
			if(x+1==y&&y+1==z) ans+=100;
		}
	}
	printf("%d\n",ans);
	return 0;
}