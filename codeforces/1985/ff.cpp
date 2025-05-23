#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
#include<vector>
typedef long long ll;
const int N = 2e6 + 50;
int a[N],c[N];
int h,n;
bool check(ll x,int h) {
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += (x / c[i] + 1) * 1ll * a[i];
    }
    if(sum >= h) return true;
    return false;
} 
void solve()
{
    std::cin >> h >> n;
    for(int i = 1; i <= n; i++)
	std::cin >> a[i];
    for(int i = 1; i <= n; i++)
	std::cin >> c[i];
    ll l = 0, r = 2e13,x;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if(check(mid,h)) {
            r = mid - 1;
            x = mid;
        }
        else l = mid + 1;
    }
    std::cout << x + 1 <<"\n";
    return;
}
int main()
{

    int t = 1;
    std::cin >> t ;
    while(t --) {
        solve();
    }
    return 0;
}
