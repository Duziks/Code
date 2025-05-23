#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

// Fast exponentiation function
long long qpow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long total = A + B + C + D;

    // Precompute factorial and inverse factorial arrays up to 'total'
    vector<long long> fact(total + 1, 0);
    vector<long long> inv_fact(total + 1, 0);

    fact[0] = 1;
    for (long long i = 1; i <= total; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    // Compute inverse factorial using Fermat's little theorem
    inv_fact[total] = qpow(fact[total], MOD - 2, MOD);
    for (long long i = total - 1; i >= 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }

    // Calculate the numerator part of the combination
    long long numerator = fact[total];
    numerator = numerator * inv_fact[A] % MOD;
    numerator = numerator * inv_fact[B] % MOD;
    numerator = numerator * inv_fact[C] % MOD;
    numerator = numerator * inv_fact[D] % MOD;

    // Calculate coefficient (5 / 24 mod MOD)
    long long inv_24 = qpow(24, MOD - 2, MOD);
    long long coefficient = 5 * inv_24 % MOD;

    // Final result
    long long result = numerator * coefficient % MOD;

    cout << result << endl;

    return 0;
}