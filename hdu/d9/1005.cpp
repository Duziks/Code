#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
void solve()
{
    long long k,x,y;
    cin>>k>>x>>y;
    if(x==y){
        int num=(k%y==0?k/y:k/y+1);
        if(num&1){
            printf("Yes\nNo\n");
        }
        else{
            printf("No\nYes\n");
        }
        return;
    }
    int j=0;
    int ji=0,ou=0;
    for(int i=0;i*x<=k;i++)
    {
        j=((k-i*x)%y==0?(k-i*x)/y:(k-i*x)/y+1);
        if((i+j)&1){
            ji=1;
        }
        else{
            ou=1;
        }
        if(ji&&ou){
            printf("Yes\nYes\n");
            return;
        }
    }
    if(ji) printf("Yes\n");
    else printf("No\n");
    if(ou) printf("Yes\n");
    else printf("No\n");
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