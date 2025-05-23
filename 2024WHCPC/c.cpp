#include <iostream>
#include <cmath>
using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN], t[MAXN];
int n, k;

inline void swap_array(int l, int mid, int r)
{
	for (int i = l; i <= mid; i++) {
		t[i] = a[i];
	}
	int i, j;
	for (i = l, j = mid + 1; j <= r; i++, j++) {
		a[i] = a[j];
	}
	for (j = l; i <= r; i++) {
		a[i] = t[j];
	}
}

void mshuffle(int l, int r, int now)
{
	cout << l  << ' ' << r << ' ' << now << endl;
	if (now == k || l == r) return;
	int mid = (l + r) / 2;
	swap_array(l, mid, r);
	if (!((l + r) & 1)) {
		--mid;
	}
	if (now < k) {
		mshuffle(l, mid, ++now);
	}
	if (now < k) {
		mshuffle(mid + 1, r, ++now);
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin >> n >> k;
	if (!(k & 1)) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	mshuffle(0, n - 1, 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}
