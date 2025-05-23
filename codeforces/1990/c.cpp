#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int t;
int n;
int a[200005];
int b[200005];
int c[200005];
map<int,int> mp;
int maxn=0;
long long ans=0;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		mp.clear();
		maxn=0;
		ans=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			ans+=1ll*a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(mp[a[i]]&&a[i]>maxn){
				maxn=a[i];
				b[i]=maxn;
			}
			else{
				mp[a[i]]=1;
				b[i]=b[i-1];
			}
		}
		maxn=0;
		mp.clear();
		for(int i=1;i<=n;i++)
		{
			ans+=1ll*b[i];
			if(mp[b[i]]&&b[i]>maxn){
				maxn=b[i];
				c[i]=maxn;
			}
			else{
				mp[b[i]]=1;
				c[i]=c[i-1];
			}
		}
		// for(int i=2;i<=n;i++)
		// {
		// 	if(b[i]!=b[i-1]&&b[i]!=b[i+1]){
		// 		ans+=(b[i]-b[i-1]);
		// 		b[i]=b[i-1];
		// 	}
		// }
		// // printf("show:");
		// // for(int i=1;i<=n;i++)
		// // 	printf("%d ",b[i]);
		// // printf("\n");
		// int tot=0;
		
		// for(int i=1;i<=n+1;i++)
		// {
		// 	if(b[i]==b[i-1]){
		// 		tot++;
		// 	}
		// 	if(b[i]!=b[i-1]){
		// 		// if(tot==0)
		// 		// {
		// 		// 	ans+=
		// 		// 	continue;
		// 		// }
		// 		// printf("tot:%d /2:%d num:%d\n",n-i+1,tot+1,b[i-1]);
		// 		ans+=1ll*(n-i+1)*b[i-1];
		// 		ans+=1ll*b[i-1]*((tot+1)*(tot+2)/2);
		// 		tot=0;
		// 	}
		// }
		for(int i=1;i<=n;i++) {
        ans+=1ll*(n-i+1)*c[i] ; 
    }
		printf("%lld\n",ans);
	}
	return 0;
}