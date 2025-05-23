#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int n;
string a[20];
int len[20];
int adj[20][20];
int dp[20][1 << 20]; // dp[i][s] 表示以第 i 个字符串结尾，状态为 s 的最大长度

int dfs(int last, int state) {
    if (dp[last][state] != -1) return dp[last][state];
    int res = len[last];
    for (int i = 0; i < n; ++i) {
        if (!(state >> i & 1) && adj[last][i]) {
            res = max(res, len[last] + dfs(i, state | (1 << i)));
        }
    }
    return dp[last][state] = res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        len[i] = a[i].length();
    }

    // 建图：若 a[i] 末字符 == a[j] 首字符，则可以从 i 接 j
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j && a[i].back() == a[j][0])
                adj[i][j] = 1;

    memset(dp, -1, sizeof(dp));
    int ans = 0;

    // 尝试从每个字符串开始
    for (int i = 0; i < n; ++i) {
        ans = max(ans, dfs(i, 1 << i));
    }

    cout << ans << '\n';
    return 0;
}
