#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
void solve()
{
    int x,y,n;
    scanf("%d%d%d",&x,&y,&n);
    if(n&1){
        for(int i=x-(n/2), j=y-(n/2);i<=x-1,j<=y-1;i++,j++)
            printf("%d %d\n",i,j);
        printf("%d %d\n",x,y);
        for(int i=x+1, j=y+1;i<=x+(n/2),j<=y+(n/2);i++,j++)
            printf("%d %d\n",i,j);
    }
    else{
        for(int i=x-(n/2), j=y-(n/2);i<=x-1,j<=y-1;i++,j++)
            printf("%d %d\n",i,j);
        for(int i=x+1, j=y+1;i<=x+(n/2),j<=y+(n/2);i++,j++)
            printf("%d %d\n",i,j);
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