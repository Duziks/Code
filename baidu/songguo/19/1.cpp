#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        long long choices = b[i] + 1 - i;
        if (choices <= 0) {
            ans = 0;
            break;
        }
        ans = ans * (choices % MOD) % MOD;
    }

    cout << ans << "\n";
    return 0;
}
