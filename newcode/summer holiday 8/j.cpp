#include <bits/stdc++.h>
typedef long long ll;

void solve() {
	int n,m;
	std::cin >> n >> m;
	if(m > n - 3 || m < n - 6) { // 5 8 
		std::cout << -1 << '\n';
		return;
	}
	int t = n - 3 - m;
	std::vector<int> v;
	for(int i = 2; i <= n; i++) v.push_back(i);
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(i == t) {
			std::cout << 1 << " ";
            n -= 1;
		}
		std::cout << v[cnt] << " ";
		cnt ++;
	}
    std::cout << '\n';
	return;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int _ = 1;
	std::cin >> _;
	while(_ --) {
		solve();
	}
	return 0;
}