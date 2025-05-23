#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
void solve()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ans=0;
    if(a==x&&b==y){
        cout<<b-a<<endl;
        return;
    }
    if(a>x&&b<y){
        printf("%d\n",b-a+2);
        return;
    }
    if(a>=x&&b<y){
        printf("%d\n",b-a+1);
        return;
    }
    if(a>x&&b<=y){
        printf("%d\n",b-a+1);
        return;
    }
    if(a<x&&b>y){
        printf("%d\n",y-x+2);
        return;
    }
    if(a<=x&&b>y){
        printf("%d\n",y-x+1);
        return;
    }
    if(a<x&&b>=y){
        printf("%d\n",y-x+1);
        return;
    }
    if(a>y||x>b){
        printf("1\n");
        return;
    }
    if(a>=x&&a<=y){
        printf("%d\n",y-a+2);
        return;
    }
    if(x>=a&&x<=b){
        printf("%d\n",b-x+2);
        return;
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