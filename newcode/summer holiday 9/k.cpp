#include <bits/stdc++.h>
typedef long long ll;
const int N = 2e6 + 50;

void solve()
{
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for(int i = 0; i < n; i ++) {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());
    
    auto check = [&](ll x)  -> bool{
        if(k == 1) {
            ll tt = a[0];
            if(tt <= x) return true;
            else return false;
        }
        if(a[0] <= x) return true;
        
        std::priority_queue<ll> q;
        for(int i = 0; i < n; i ++) {
            q.push(a[i]);
        }
        while(1) {
            ll t = q.top(); 
            q.pop();
            if(t <= x) return true;
            if(x == 0) break;
            if(t >= k) q.push(t / k);
            x --;
        }
        return false;
    };
    ll l = 1, r = 1e9 + 10,x = 0;
    while(l <= r) {
        ll mid = (l + r) >> 1;
        if(check(mid))
            r = mid - 1, x = mid;
        else    
            l = mid + 1;
    }
    std::cout << x << '\n';
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
