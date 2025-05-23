#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char a[1005];
void solve()
{
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
        cin>>a;
        int len=strlen(a);
        if(a[0]=='1'&&a[1]=='0'&&a[2]!='0'&&(a[2]!='1'&&len==3||len>3)) cout<<"YES\n";
        else cout<<"NO\n";
    // }
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