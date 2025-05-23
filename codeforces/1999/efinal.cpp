#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
// #include<pair>
using namespace std;
int lg3(int x) {
    int res=1;
    while(x>2){
        x/=3;
        res++;
    }
    return res;
}
int dp[200005],sum[200005];
void solve()
{
    int l,r;
    int ans = 0;
    scanf("%d%d",&l,&r);
    ans += sum[r] - sum[l - 1];
    ans += lg3(l);
    printf("%d\n",ans);
    return;
}
int main()
{
    for(int i = 1; i <= 2e5; i++) {
        dp[i] = lg3(i);
        sum[i] = sum[i - 1] + dp[i];
    }
    int t;
    // t=1;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}