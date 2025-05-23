#include <iostream>
#include <cstring>
using namespace std;

const int gcd(const int &a, const int &b)
{
    if (b == 0) return a;
    if (a == 0) return b;
    return gcd(b, a % b);
}

const int MAXN = 2e5 + 10;
int a[MAXN], b[MAXN];

struct ST {
    struct node {
        int l, r;
        int val;
    } tree[MAXN << 2];

#define self tree[p]
#define ls (p << 1)
#define rs (p << 1 | 1)
#define lson tree[ls]
#define rson tree[rs]

    void build(int p, int l, int r)
    {
        self.l = l, self.r = r;
        if (l == r) {
            self.val = b[l];
            return;
        }
        int mid = (l + r) >> 1;
        build(ls, l, mid);
        build(rs, mid + 1, r);
        self.val = gcd(lson.val, rson.val);
    }

    void modify(int p, int x, int v)
    {
        if (self.l == self.r) {
            self.val = v;
            return;
        }
        int mid = (self.l + self.r) >> 1;
        if (x <= mid) modify(ls, x, v);
        else modify(rs, x, v);
        self.val = gcd(lson.val, rson.val);
    }
} st;

int count(int x)
{
    int ans = 1;
    for (int i = 2; i <= x; i++) {
        int cnt = 1;
        while (x % i == 0) {
            x /= i;
            cnt++;
        }
        ans *= cnt;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("./in", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        memset(st.tree, 0, sizeof st.tree);
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                b[i] = i;
            }
            else b[i] = 0;
        }
        st.build(1, 1, n);
        cout << count(st.tree[1].val) << endl;
        for (int i = 1; i <= q; i++) {
            int x, v;
            cin >> x >> v;
            a[x] = v;
            if (x < n)
                if (a[x] > a[x + 1]) {
                    st.modify(1, x, x);
                }
                else {
                    st.modify(1, x, 0);
                }
            if (x > 1)
                if (x > 1 && a[x - 1] > a[x]) {
                    st.modify(1, x - 1, x - 1);
                }
                else {
                    st.modify(1, x - 1, 0);
                }
            cout << count(st.tree[1].val) << endl;
        }
    }
    return 0;
}