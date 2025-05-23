#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#include<queue>
using namespace std;
int a[100005];
priority_queue<int,vector<int>,greater<int> > q;
void solve()
{
    int n,x,k;
    scanf("%d%d%d",&n,&x,&k);
    int now=x;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    // q.clear();
    while(!q.empty()) q.pop();
    int j=1;
    int ans=0;
    for(j=1;j<=n;j++)
    {
        if(now>=a[j]){
            now-=a[j];
            ans=j;
            q.push(a[j]);
            continue;
        }
        if(k)
        {
            now+=q.top();
            q.pop();
            k--;
            j--;
        }
    }
    printf("%d\n",ans);
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