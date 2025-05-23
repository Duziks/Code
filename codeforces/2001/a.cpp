#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int a[105];
int b[1005];
void solve()
{
    int n;
    cin>>n;
    int maxn=0;
    memset(b,0,sizeof(b));
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]>maxn) maxn=b[a[i]];
    }
    cout<<n-maxn<<endl;
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