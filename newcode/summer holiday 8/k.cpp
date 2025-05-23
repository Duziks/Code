#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char a[500005];
void solve()
{
    cin>>a;
    int len=strlen(a);
    int ok=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]=='a')
        {
            if(a[i+1]=='v'&&a[i+2]=='a'&&a[i+3]=='v'&&a[i+4]=='a'){
                i+=4;
                continue;
            }
            if(a[i+1]=='v'&&a[i+2]=='a'){
                i+=2;
                continue;
            }
        }
        printf("No\n");
        return;
    }
    printf("Yes\n");
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