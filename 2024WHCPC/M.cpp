#include <iostream>
#include <queue>
#include <bitset>
using namespace std;

const int MAXN = 310, MAXM = MAXN * MAXN;
int Head[MAXN], Next[MAXM], to[MAXM], tot;

inline void add(const int &x, const int &y)
{
	to[++tot] = y;
	Next[tot] = Head[x];
	Head[x] = tot;
}

int n, m;
int in[MAXN], a[MAXN], b[MAXN];
bitset<MAXN> st[MAXN], v[MAXN];

inline int cal(int x)
{
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (st[x][i])
			ans += v[x][i] ? b[i] : a[i];
	}
	return ans;
}

queue<int> q;

inline void topsort()
{
	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) {
			a[i] = min(a[i], b[i]);
			st[i][i] = 1;
			q.push(i);
		}
	}
	while (!q.empty()) {
		int x = q.front();
		st[x][x] = 1;
		q.pop();
		
		if (cal(x) > b[x]) {
			st[x].reset();
			v[x].reset();
			st[x][x] = 1;
			v[x][x] = 1;
		}
		
		for (int i = Head[x]; i; i = Next[i]) {
			int y = to[i];
			st[y] |= st[x];
			v[y] |= v[x];
			in[y]--;
			if (in[y] == 0) {
				q.push(y);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		add(x, y);
		in[y]++;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	topsort();
	int X;
	cin >> X;
	cout << cal(X) << endl;
	return 0;
}
