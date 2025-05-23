#include <bits/stdc++.h>
typedef long long ll;
const int N = 2e6 + 50;
const ll mod = 998244353;
ll ksm(ll a,ll b,ll p)
{
    ll ans = 1;
    while(b > 0)
    {
       if(b & 1) ans = ans * a % p;
       a = a * a % p;
       b >>= 1;
    }
    return ans;
}

void solve()
{
    ll a,b;
    std::cin >> a >> b;
    if(a == b) {
        ll A = 1 % mod * ksm(2,mod - 2,mod) % mod;
        ll B = 1 % mod * ksm(2,mod - 2,mod) % mod;
        std::cout << A << " " << B << "\n";
    }
    else if(a < b) {
        ll p = 1;
        while(1) {
            if(a >= b) break;
            b -= a;
            a += a;
            p *= 2;
            p %= mod; 
        }
        p *= 2; p %= mod;
        //std::cout << p << " " << 1 << "\n";
        ll A = 1 % mod * ksm(p,mod - 2,mod) % mod;
        ll B = (p - 1) % mod * ksm(p,mod - 2,mod) % mod;
        std::cout << A << " " << B << "\n";
    } 
    else {
        std::swap(a,b);
        ll p = 1;
        while(1) {
            if(a >= b) break;
            a += a;
            p *= 2;
            p %= mod;
            b -= a;
        }
        p *= 2; p %= mod;
        ll A = 1 % mod * ksm(p,mod - 2,mod) % mod;
        ll B = (p - 1) % mod * ksm(p,mod - 2,mod) % mod;
        std::cout << B << " " << A << "\n";
    }
    return;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int _ = 1;
    //std::cin >> _ ;
    while(_ --) {
        solve();
    }
    return 0;
}
