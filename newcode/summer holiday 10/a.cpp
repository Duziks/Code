#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char a[50];
void solve()
{
    cin>>a;
    int y=0;
    int n=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='N') n++;
        if(a[i]=='Y') y++;
    }
    if(y>=4){
        printf("1\n");
        return;
    }
    if(n>=2){
        printf("-1\n");
        return ;
    }
    printf("0\n");
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