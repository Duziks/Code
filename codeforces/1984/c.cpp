#include<cstring>
#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;
const int INF=0x7fffffff;
int abss(int aa)
{
	if(aa>=0) return aa;
	 else return -1ll*aa;
}
void work()
{
	int n ;
	cin >> n ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i ++ ) cin >> a[i] ;
    vector<int> b ;
    for(int i = 0 ; i < n - 1 ; i ++ ) {
        if((a[i] > 0 && a[i+1] < 0) || (a[i] < 0 && a[i+1] > 0)){
        b.push_back(a[i]) ;
        }
        else 
        a[i+1] = a[i+1] + a[i] ;
    }
    b.push_back(a[n-1]) ;
    n = b.size() ;
    vector<int> zuo(n) , you(n) ;
    zuo[0] = abs(b[0]) ;
    you[0] = b[0] ;
    if(n == 1) {
        cout << abs(b[0]) << endl ; 
		return ;
    }
    for(int i = 1 ; i < n - 1 ; i ++ ) {
        if(a[i] > 0) {
          zuo[i] = max(abs(zuo[i-1] + b[i]), abs(you[i-1] + b[i])) ;
            you[i] = min(zuo[i-1] + b[i], you[i-1] + b[i]) ;
        }
        else {
            zuo[i] = max(abs(zuo[i-1] + b[i]), abs(you[i-1] + b[i])) ;
            you[i] = min(zuo[i-1] + b[i] , you[i-1] + b[i]) ;
        }
    }
    int ans = -INF ;
    ans = max(ans,max(abss(zuo[n-2] + b[n-1]),abss(you[n-2] + b[n-1]))) ;
    cout << ans << endl ;
} 
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		work(); 
	}
	return 0;
} 
