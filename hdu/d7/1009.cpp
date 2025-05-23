#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
struct E{
    int v;
    int w;
    int nex;
};E e[200005];
int head[200005];
long long tim[100005];
int tot[100005];
int cnt=0;
void add(int u,int v,int w)
{
    e[++cnt].v=v;
    e[cnt].w=w;
    e[cnt].nex=head[u];
    head[u]=cnt;
}
long long dfs(int now)
{
    printf("now:%d\n",now);
    if(tim[now]) return tim[now];
    for(int i=head[now];i!=-1;i=e[i].nex)
    {
        tim[now]+=(1ll*e[i].w*dfs(e[i].v));

    }
    return tim[now];
}

void solve()
{
    int n,k;
    int o;
    int num;
    int a,b;
    cnt=0;
    memset(tim,0,sizeof(tim));
    memset(head,-1,sizeof(head));
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&o);
        if(o==0)
        {
            scanf("%d",&tim[i]);
        }
        if(o==1)
        {
            scanf("%d",&num);
            for(int j=1;j<=num;j++)
            {
                scanf("%d%d",&a,&b);
                add(i,b,a);
            }
        }
    }
    dfs(k);
    long long maxn=0;
    for(int i=1;i<=n;i++)
    {
        if(i==k) continue;
        if(tim[i]>maxn) maxn=tim[i];
    }
    for(int i=1;i<=n;i++)
    {
        printf("%lld ",tim[i]);
    }printf("\n");
    printf("%lld\n",tim[k]);
    return;
}
int main()
{
    int t;
    // t=1;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}