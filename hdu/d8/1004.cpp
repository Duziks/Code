#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
void solve()
{
    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    int ans;
   if(n<=2||m<=2){
    printf("%d\n",n*m);
    return;
   }
     ans=(n+m)*2-4;
    if((a==1||a==n)&&!(b==1||b==m)){
        ans+=(n-2);
        printf("%d\n",ans);
        return;
    }
    if((b==1||b==m)&&!(a==1||a==n)){
        ans+=(m-2);
        printf("%d\n",ans);
        return;
    }
    if(a>1&&a<n&&b>1&&b<m)
    ans+=max(n-2,m-2);
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