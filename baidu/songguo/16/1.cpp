#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a, b, x;
    cin >> a >> b >> x;

    // 底面等边三角形面积 A = sqrt(3)/4 * a^2
    const long double SQ3 = sqrtl((long double)3.0);
    long double A = SQ3 / 4.0L * a * a;
    long double V0 = A * b;

    // 特殊情况：没有液体时可以倾到 90°
    if (x <= 0) {
        cout << fixed << setprecision(7) << 90.0000000L << "\n";
        return 0;
    }
    // 液体已满或超过时不能倾
    if (x >= V0) {
        cout << fixed << setprecision(7) << 0.0000000L << "\n";
        return 0;
    }

    // 第一段推导：V_max = V0 - a^3/8 * tan(alpha)
    long double tan_alpha = 8.0L * (V0 - x) / (a * a * a);

    if (tan_alpha <= 0) {
        cout << fixed << setprecision(7) << 0.0000000L << "\n";
        return 0;
    }

    // arctan 结果转成度
    long double alpha_rad = atanl(tan_alpha);
    long double alpha_deg = alpha_rad * 180.0L / acosl(-1.0L);

    cout << fixed << setprecision(7) << alpha_deg << "\n";
    return 0;
}
