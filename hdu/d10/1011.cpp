#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
long long now;
long long a[200005];
long long read()
{
    long long x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
void solve()
{
    long long n,k,m;
    long long tot=0;
    n=read();
    m=read();
    k=read();
    
    for(int i=1;i<=n;i++)
       a[i]=read();
    int ok=1;
    for(int i=1;i<=n;i++)
    {
        tot+=(a[i]-1);
        if(tot>=k){
            ok=0;
            break;
        }
    }
    for(int i=1;i<=n;i++)
        now=read();
    if(k==m){
        printf("YES\n");
        return;
    }
    if(!ok) {
        printf("NO\n");
    }
    else printf("YES\n");
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