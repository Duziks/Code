#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
long long a[200005];
char b[200005];
map<long long,char> mpa;
map<char,long long> mpb;
void solve()
{
    int n;
    int m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        mpa.clear();
        mpb.clear();
        int ok=1;
        cin>>b;
        if(strlen(b)!=n){
            printf("NO\n");
            continue;
        }
        for(int j=1;j<=n;j++)
        {
            if(!mpa[a[j]]&&!mpb[b[j-1]]){
                mpa[a[j]]=b[j-1];
                mpb[b[j-1]]=a[j];
            }
            if(mpa[a[j]]!=b[j-1]||mpb[b[j-1]]!=a[j]){
                ok=0;
                break;
            }
        }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
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