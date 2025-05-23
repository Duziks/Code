#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
char a[20][100005];
int l[20];
int map[25][25];
int vis[20];
int ans;
void dfs(int now,int len)
{
    ans=max(len,ans);
    for(int i=1;i<=n;i++)
    {
        if(map[now][i]==1)
        {
            if(!vis[i])
            {
                vis[i]=1;
                dfs(i,len+l[i]);
                vis[i]=0;
            }
        }
    }
    return;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        l[i]=strlen(a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j) continue;
            if(a[i][l[i]-1]==a[j][0]) map[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        vis[i]=1;
        dfs(i,l[i]);

    }
    cout<<ans<<endl;
    return 0;
}