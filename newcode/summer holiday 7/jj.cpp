#include <bits/stdc++.h>
typedef long long ll;

void solve() {
	ll l,x,y;
	std::cin >> l >> x >> y;
	if(x < 0) {
		ll d = std::sqrt(x * x + y * y);
		std::cout << ((d <= l) ? "Yes\n0\n" : "No\n"); 
	}
	else {
		double pd = std::sqrt(x * x + y * y);
		if(pd <= l) {
			std::cout << "Yes\n0\n";
			return;
		} 
		x -= l; 
		ll qd =  std::sqrt(x * x + y * y);
		if(qd <= l) {
			std::cout << "Yes\n" << l << '\n';
			return;
		} 
		std::cout << "No\n";
	}
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