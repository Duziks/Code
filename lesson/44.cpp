#include<stdio.h>
int n,m;
int x,y;
struct E{
    int u;
    int v;
    int nex;
};E e[100005];
int head[100005];
int vis[100005];
int ans[100005];
int que[100005];
int dep[100005];
int front=0;
int rear=0;
int cnt;
int sum=0;
void add(int u,int v)
{
    e[++cnt].v=v;
    e[cnt].nex=head[u];
    head[u]=cnt;
}
void bfs(int now)
{
    rear=0;
    front=0;
    vis[now]=1;
    sum=1;
    que[++rear]=now;
    dep[rear]=0;
    while(front<rear)
    {
        int u=que[++front];
        int depth=dep[front];
        if(depth>=6) continue;
        for(int i=head[u];i!=-1;i=e[i].nex)
        {
            int v=e[i].v;
            if(!vis[v]){
                que[++rear]=v;
                dep[rear]=depth+1;
                vis[v]=1;
                sum++;
            }
         }
        
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    head[i]=-1;
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        vis[j]=0;
        sum=0;
        bfs(i);
        ans[i]=sum;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d: %.2lf",i,double(ans[i]*1.0/n)*100.0);
        putchar('%');
        printf("\n");
    }
    return 0;
}