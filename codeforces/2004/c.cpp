#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
long long a[200005];
int cmp(long long aa,long long bb)
{
    return aa>bb;
}
void solve()
{
    int n,k;
    long long AA = 0, BB = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) {
            if(k >= a[i-1] - a[i]) {
                k -= a[i-1] - a[i];
                a[i] = a[i-1];
            }
            else {
                a[i] += k;
                k = 0;
            }
        }
        if(i % 2 == 1) AA += a[i];
        else BB += a[i];
    }
   printf("%lld\n",BB-AA);
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