#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++){
        cin >> grid[i];
    }
    
    int oddRows = 0, oddCols = 0;
    
    // 统计每一行“X”（视为 1）的个数奇偶性
    for (int i = 0; i < n; i++){
        int cnt = 0;
        for (int j = 0; j < m; j++){
            if(grid[i][j] == 'X') cnt++;
        }
        if(cnt % 2 != 0)
            oddRows++;
    }
    
    // 统计每一列“X”的个数奇偶性
    for (int j = 0; j < m; j++){
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if(grid[i][j] == 'X') cnt++;
        }
        if(cnt % 2 != 0)
            oddCols++;
    }
    
    int ans = max(oddRows, oddCols);
    cout << ans << endl;
    return 0;
}
