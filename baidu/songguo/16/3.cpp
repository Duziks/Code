#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<ll>a(N);
    for(int i = 0; i < N; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll dp0 = 0;
    const ll INF = (ll)4e18;
    ll M = -INF;

    for(int i = 0; i < N; i++){
        M = max(M, a[i] - dp0);
        dp0 = M;
    }

    cout << dp0 << "\n";
    return 0;
}
