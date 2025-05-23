#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int a[200005];
int b[200005];
long long ans=0;
long long p;
void solve()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    int x=1,y=n;
    ans=0;
    p=0;
    while(x<=y)
    {
        if(b[x]<b[y]||b[x]==b[y]&&a[x]>a[y]){
            p+=a[x];
            ans+=p*b[x];
            x++;
        }
        else{
            p+=a[y];
            ans+=p*b[y];
            y--;
        }
    }
    printf("%lld\n",ans);
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