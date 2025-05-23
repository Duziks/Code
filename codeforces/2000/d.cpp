#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int a[200005];
char b[200005];
long long pre[200005];

void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!i) pre[i]=a[i];
        if(i){
            pre[i]=pre[i-1]+a[i];
        }
    }
    cin>>b;
    int l=0,r=n-1;
    long long ans=0;
    while(l<r)
    {
        // printf("%d %d\n",l,r);
        while(b[l]=='R') l++;
        while(b[r]=='L') r--;
        if(l>=r) break;
        // printf("%d %d\n",l,r);
        // printf("+%d %d %d\n",pre[r],pre[l],a[l]);
        ans+=(pre[r]-pre[l]+a[l]);
        l++;r--;
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