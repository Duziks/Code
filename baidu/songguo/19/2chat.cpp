#include <bits/stdc++.h>
using namespace std;
struct P {
    int id, x, y;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<P> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y;
        a[i].id = i + 1;
    }
    sort(a.begin(), a.end(), [](const P &A, const P &B){
        return A.id < B.id;
    });
    const int MAXS = 1501;
    vector<int> cnt(MAXS);
    vector<P> b(n);  
    while(m--){
        for(int i = 0; i < n; i += 2){
            P &u = a[i], &v = a[i+1];
            if(u.y > v.y) 
                u.x++;
            else 
                v.x++;
        }
        fill(cnt.begin(), cnt.end(), 0);
        int max_score = 0;
        for(auto &p : a){
            cnt[p.x]++;
            max_score = max(max_score, p.x);
        }
        vector<int> pos(max_score+2);
        int acc = 0;
        for(int s = max_score; s >= 0; s--){
            pos[s] = acc;
            acc += cnt[s];
        }
        for(auto &p : a){
            int s = p.x;
            b[pos[s]++] = p;
        }
        a.swap(b);
    }
    for(int i = 0; i < n; i++){
        cout << a[i].id << (i+1<n ? ' ' : '\n');
    }
    return 0;
}
