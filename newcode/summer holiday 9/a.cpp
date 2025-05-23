#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char a[505][505];
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve()
{
    int n,m;
    int o=0;
    int fx,fy,ex,ey;
    int x,y;
    scanf("%d%d",&n,&m);
    // getchar();
    for(int i=0;i<n;i++)
        cin>>a[i];
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //         cout<<a[i][j];
    //     cout<<"\n";
    // }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='x'){
                if(o==0){
                    fx=i;
                    fy=j;
                    o=1;
                }
                ex=i;
                ey=j;
            }
        }
    x=ex-fx+1;
    y=ey-fy+1;
    int now=gcd(x,y);
    // printf("%d %d\n",x/now,y/now);
    for(int i=1;i<=x/now;i++)
    {
        for(int j=1;j<=y/now;j++)
            printf("x");
        printf("\n");
    }
    return;
}
int main()
{
    int t;
    t=1;
    // scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}