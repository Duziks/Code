#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Player {
    string name;
    vector<int> val;  // val[j] = 第 j 个属性的数值 (0-based)
    ll power;         // 计算好的战力值
    int idx;          // 原始编号 (1-based)
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // 1) 读角色名
    vector<Player> P(n);
    for(int i = 0; i < n; i++){
        cin >> P[i].name;
        P[i].idx = i + 1; 
        P[i].val.resize(m);
    }

    // 2) 读属性名 & 难度系数
    vector<string> attrName(m);
    for(int j = 0; j < m; j++){
        cin >> attrName[j];
    }
    vector<int> diff(m);
    for(int j = 0; j < m; j++){
        cin >> diff[j];
    }

    // 3) 为后续 tie-break 准备：把属性编号 0..m-1 按名字排一下
    vector<int> order(m);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(),
         [&](int a, int b){
             return attrName[a] < attrName[b];
         });

    // 4) 读每个角色的属性值，并顺便算一下战力
    for(int i = 0; i < n; i++){
        ll tot = 0;
        for(int j = 0; j < m; j++){
            cin >> P[i].val[j];
            tot += ll(P[i].val[j]) * diff[j];
        }
        P[i].power = tot;
    }

    // 5) 排序：先比 power；再比属性（按 order 顺序）；最后比名字
    auto cmp = [&](const Player& A, const Player& B){
        if (A.power != B.power)
            return A.power > B.power;        // 战力降序
        // 战力相同，按属性字典序依次比
        for(int k = 0; k < m; k++){
            int id = order[k];
            if (A.val[id] != B.val[id])
                return A.val[id] > B.val[id];
        }
        // 属性全相同，按名字升序
        return A.name < B.name;
    };
    sort(P.begin(), P.end(), cmp);

    // 6) 输出排序后的原始编号
    for(int i = 0; i < n; i++){
        cout << P[i].idx << (i+1<n ? ' ' : '\n');
    }
    return 0;
}
