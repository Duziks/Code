#include <cstring>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;

int n;
int x, y;
int a[200005];
int b[200005];
int f[200005]; // 使用一维数组存储当前状态

void solve() {
    scanf("%d%d%d", &n, &x, &y);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &a[i], &b[i]);

    // 初始化f数组
    // fill(f + 1, f + x + 2, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = x; j >= a[i]; j--) {
            f[j] = max(f[j], f[j - a[i]] + 1);
        }
        for (int k = y; k >= b[i]; k--) {
            f[k] = max(f[k], f[k - b[i]] + 1);
        }
    }

    int maxEaten = 0;
    for (int i = 1; i <= x; i++) {
        maxEaten = max(maxEaten, f[i]);
    }

    printf("%d\n", maxEaten);
    return;
}

int main() {
    int t;
    // scanf("%d", &t);
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}