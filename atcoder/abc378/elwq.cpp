// Problem: E - Mod Sigma Problem
// Contest: AtCoder - AtCoder Beginner Contest 378
// URL: https://atcoder.jp/contests/abc378/tasks/abc378_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
const int N = 2e5 + 4;
const int mod = 1e9 + 7;
int b[N];  
i64 ans = 0;
i64 msort(std::vector<i64> &a,int l,int r)
{
    if(l >= r) return 0;
    int mid = (l + r) / 2;
    msort(a,l,mid); 
    msort(a,mid+1,r);
    int i = l, j = mid + 1,k = l;
    while(i <= mid && j <= r)
    {
        if(a[i] <= a[j])  b[k++] = a[i++];
        else {
            b[k++] = a[j++];
            ans += (mid - i + 1);
        }
    }
    while(i <= mid) b[k++] = a[i++];
    while(j <= r) b[k++] = a[j++];
    for(int i = l; i <= r; i++)  a[i] = b[i];
	return ans;
}

void solve() {
	int n,m;
	std::cin >> n >> m;
	std::vector<i64> a(n+1),s(n+1),t(n+1);

	for(int i = 1; i <= n; i++) {
		std::cin >> a[i];
		s[i] = s[i-1] + a[i];
		s[i] %= m;
	}
	std::copy(s.begin(),s.end(),t.begin());
	i64 res = msort(t,1,n);
	i64 Ans = 0;
	for(int i = 1; i <= n; i++) {
		Ans += s[i] * i;
	}
	for(int i = 1; i <= n; i++) {
		Ans -= (s[i-1] * (n - i + 1));
	}
	Ans += m * res;
	std::cout << Ans << '\n';
	return;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int _ = 1;
	//std::cin >> _;
	while(_ --) {
		solve();
	}
	return 0;
}