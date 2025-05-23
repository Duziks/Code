#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// 定义一个支持 order_of_key 的有序集合
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int NMAX = 200000;

int n, m;
vector<ordered_set> BIT; // 1-indexed 树状数组，大小为 n+1
vector<int> a;         // 维护当前排列

// BIT_update：在位置 pos 对应的所有树状数组节点中，将 old_val 替换为 new_val
void BIT_update(int pos, int old_val, int new_val) {
    for(; pos <= n; pos += pos & -pos) {
        BIT[pos].erase(old_val);
        BIT[pos].insert(new_val);
    }
}

// BIT_query(pos, val)：查询区间 [1, pos] 内小于 val 的数的个数
int BIT_query(int pos, int val) {
    int res = 0;
    for(; pos > 0; pos -= pos & -pos)
        res += BIT[pos].order_of_key(val);
    return res;
}

// 查询区间 [l, r] 内满足 low < value < high 的个数
int query_range(int l, int r, int low, int high) {
    if(l > r) return 0;
    int cnt = (BIT_query(r, high) - BIT_query(l - 1, high))
              - (BIT_query(r, low + 1) - BIT_query(l - 1, low + 1));
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    a.resize(n + 1);
    // 初始排列为 1,2,...,n
    for (int i = 1; i <= n; i++){
        a[i] = i;
    }
    
    // 初始化树状数组，每个节点内的集合为空
    BIT.resize(n + 1);
    // 建树状数组：对于每个位置 i，将 a[i] 插入到所有覆盖 i 的节点中
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j += j & -j){
            BIT[j].insert(a[i]);
        }
    }
    
    // 初始排列本身无逆序对
    long long inv = 0;
    
    while(m--){
        int i, j;
        cin >> i >> j;
        if(i > j) swap(i, j);  // 保证 i<j
        int x = a[i], y = a[j];
        int low = min(x, y), high = max(x, y);
        // 查询区间 (i+1, j-1) 内满足 low < a[k] < high 的个数
        int cnt = query_range(i + 1, j - 1, low, high);
        long long delta = 0;
        if(x < y) {
            delta = 2LL * cnt + 1;
        } else {
            delta = - (2LL * cnt + 1);
        }
        inv += delta;
        
        // 交换 a[i] 与 a[j]
        swap(a[i], a[j]);
        
        // 更新树状数组中 i 与 j 位置上的值
        BIT_update(i, x, a[i]); // 此时 a[i] 为原来的 y
        BIT_update(j, y, a[j]); // 此时 a[j] 为原来的 x
        
        cout << inv << "\n";
    }
    
    return 0;
}
