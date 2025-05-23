#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d;
    cin >> d;
    vector<int> a(d);
    for (int i = 0; i < d; i++) {
        cin >> a[i];
    }
    int n = 1;
    for (int i = 0; i < d; i++) {
        n *= a[i];
    }
    string blocked;
    cin >> blocked;
    vector<int> stride(d, 1);
    for (int i = d - 2; i >= 0; i--) {
        stride[i] = stride[i + 1] * a[i + 1];
    }

    int start = 0;
    int target = 0;
    for (int i = 0; i < d; i++) {
        target += (a[i] - 1) * stride[i];
    }

    if (blocked[start] == '1' || blocked[target] == '1') {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> dist(n, -1);
    queue<int> q;
    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u == target) break;
        int du = dist[u];
        for (int i = 0; i < d; i++) {
            int ci = (u / stride[i]) % a[i];
            if (ci > 0) {
                int v = u - stride[i];
                if (dist[v] == -1 && blocked[v] == '0') {
                    dist[v] = du + 1;
                    q.push(v);
                }
            }
            if (ci + 1 < a[i]) {
                int v = u + stride[i];
                if (dist[v] == -1 && blocked[v] == '0') {
                    dist[v] = du + 1;
                    q.push(v);
                }
            }
        }
    }

    cout << dist[target] << "\n";
    return 0;
}
