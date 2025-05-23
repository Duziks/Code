#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int vis[200005];
void solve()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n+1;i++) vis[i]=0;
    int ok=1;
    int k;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        if(i>1)
        {
            if(vis[k-1]==0&&vis[k+1]==0){
                ok=0;
            }
        }
        vis[k]=1;
    }
    if(ok) printf("YES\n");
    else printf("NO\n");
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