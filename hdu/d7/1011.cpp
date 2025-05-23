#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#include<stack>
using namespace std;
unsigned long long x,y;
unsigned long long gcd(unsigned long long a,unsigned long long b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
__int128 lcm(unsigned long long a,unsigned long long b)
{
    unsigned long long gcd_=gcd(a,b);
    __int128 tmp;
    tmp=(__int128)a/gcd_*b;
    return tmp;
}
void Put(__int128 aa)
{
    stack<int> sta;
    while(aa)
    {
        sta.push(aa%10);
        aa/=10;
    }
    while(!sta.empty())
    {
        printf("%d",sta.top());
        sta.pop();
    }
}
void out(__int128 aa)
{
    if(aa<0) putchar('-'),aa=-aa;
    stack<int> sta;
    while(aa) sta.push(aa%10),aa/=10;
    while(!sta.empty()) putchar(sta.top()+'0'),sta.pop();
}
void solve()
{
    scanf("%llu%llu",&x,&y);
    // printf("%lld\n",lcm(x,y));
    __int128 now=lcm(x,y);
    if(now==x){
        printf("%llu %llu\n",y,1ll*x/y);
        return;
    }
    if((now/x)%2==0){
        __int128 tmp=now/y;
        printf("%llu ",y);
        out(tmp);
        cout<<"\n";
    }
    else{
        __int128 tmp=now/y*2;
        printf("%llu ",y);
        out(tmp);
        cout<<"\n";
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