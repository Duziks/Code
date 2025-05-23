#include<bits/stdc++.h> 
using namespace std;

const int maxn = 1e6 + 10;
int a[maxn];
map<int, int> vis;
int nowl, ans, n;
int tt;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (vis[a[i]] && tt <= vis[a[i]]) {
            nowl = i - vis[a[i]];
            tt = vis[a[i]] + 1;
            vis[a[i]] = i;
            if (ans < nowl) ans = nowl;
        }
        else {
            vis[a[i]] = i;
            nowl++;
            if (ans < nowl) ans = nowl;
        }
    }
    cout << ans;
}