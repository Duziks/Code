#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using uint = unsigned int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<uint> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<uint> sb = b;
    sort(sb.begin(), sb.end());

    vector<uint> answers;
    answers.reserve(n);
    vector<uint> c(n);
    for (int j = 0; j < n; j++) {
        uint x = a[0] ^ b[j];
        // Build c = { a[i] ^ x }
        for (int i = 0; i < n; i++) {
            c[i] = a[i] ^ x;
        }
        sort(c.begin(), c.end());
        if (c == sb) {
            answers.push_back(x);
        }
    }
    sort(answers.begin(), answers.end());
    answers.erase(unique(answers.begin(), answers.end()), answers.end());
    cout << answers.size() << "\n";
    for (uint x : answers) {
        cout << x << "\n";
    }

    return 0;
}
