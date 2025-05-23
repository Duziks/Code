#include <bits/stdc++.h>
typedef long long ll;
const int N = 2e6  + 50;
using namespace std;
void solve()
{
    string s , c , o = "";
    cin >> s;  c = s;
    bool ok = true;
    int len = s.length();
    vector<int> a(len+1),v(len + 1);
    v[0] = 0; int ans = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] != '3') v[++ans] = i + 1;
    }
    v[++ans] = len+1;
    for(int i = 1; i <= ans; i++) {
        if(v[i] - v[i-1] > 10) ok = false;
    } // 10 3

    a[0] = 0; int num = 0;
    for(int i = 0; i < len ; i++) {
        if(c[i] == '5' || c[i] == 'U') a[++num] = i + 1;
        if(c[i] != '3' && c[i] != '4') o = o + c[i]; // 5u5u5u5u5u5u5u5u5u5u
    }
    a[++num] = len+1;
    // cout<<o<<endl;
    bool okk = true;
    for(int i = 1; i <= num; i++) { // Lin 5 <= 90
        if(a[i] - a[i-1] > 90) okk = false;
    }
    bool okkk = true;
    for(int i = 1; i < o.length(); i++) {
        if(o[i] == '5' && o[i-1] == '5') okkk = false;
    }
    if(ok && okk && okkk) cout << "valid" << endl;
    else cout << "invalid" << endl;
    return;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int _ = 1;
    std::cin >> _ ;
    while(_ --) {
        solve();
    }
    return 0;
}
