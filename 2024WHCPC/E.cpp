#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long ans = (long long) (n - 1) * (3 * n - 1);
		cout << ans << endl;
	}
	return 0;
}
