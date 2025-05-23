#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
void solve()
{
    long long n,m;
    std::cin >> n >> m;
    std::vector<long long> a(n),sum(n+2);
    for(int i = 0; i < n; i ++) 
        std::cin >> a[i];
    std::sort(a.begin(), a.end());
    for(int i = 0; i < n; i ++)
        sum[i+1] = sum[i] + a[i];
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        int q = upper_bound(a.begin(), a.end(), a[i] + 1) - a.begin();
        int l = i , r = q;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(sum[mid] - sum[i] <= m) 
                ans = std::max(ans, sum[mid] - sum[i]), l = mid + 1; 
            else r = mid - 1;
        }
    }
    std::cout << ans << "\n";
    return;
}
int main()
{
    int t = 1;
    std::cin >> t ;
    while(t --)
        solve();
    return 0;
}