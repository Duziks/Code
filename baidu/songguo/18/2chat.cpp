#include <bits/stdc++.h>
using namespace std;

struct Node {
    int nxt[26];
    int cnt;
    Node() {
        memset(nxt, 0, sizeof(nxt));
        cnt = 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<Node> trie;
    trie.reserve(1000000 + 5);
    trie.push_back(Node());  // root = 0

    string s;
    // 构建 Trie，并在每个节点累加经过该节点的单词数量（考虑重复词）
    for (int i = 0; i < n; i++) {
        cin >> s;
        int u = 0;
        trie[u].cnt++;
        for (char ch : s) {
            int c = ch - 'a';
            if (!trie[u].nxt[c]) {
                trie[u].nxt[c] = trie.size();
                trie.push_back(Node());
            }
            u = trie[u].nxt[c];
            trie[u].cnt++;
        }
    }

    // 用栈维护当前缓冲区在 Trie 中对应的节点编号
    // 用 -1 表示“已经偏离了所有词库前缀”（此时任何继续插入均保持 -1）
    vector<int> stk;
    stk.reserve(m + 5);
    stk.push_back(0);  // 初始在 root

    for (int i = 0; i < m; i++) {
        int opt;
        cin >> opt;
        if (opt == 1) {
            char ch;
            cin >> ch;
            int top = stk.back();
            if (top >= 0) {
                int nx = trie[top].nxt[ch - 'a'];
                if (nx) stk.push_back(nx);
                else    stk.push_back(-1);
            } else {
                // 已经不在任何前缀上，继续保持“失配”
                stk.push_back(-1);
            }
        } else {
            // 删除：缓冲串末尾删一个，栈弹一个（根节点不能弹）
            if (stk.size() > 1) 
                stk.pop_back();
        }

        int now = stk.back();
        if (now < 0) 
            cout << 0 << "\n";
        else 
            cout << trie[now].cnt << "\n";
    }

    return 0;
}
