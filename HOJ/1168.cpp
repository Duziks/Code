#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[25];
int k;
int maxn,minn;
int tot;
int main()
{
	cin >> n;
	maxn = 0;
	minn = 32770;
	for(int i = 1; i <= n; i ++)
	{
		cin >> k;
		maxn = max(maxn, k);
		minn = min(minn, k);
		tot += k;
	}
	tot -= maxn;
	tot -= minn;
	cout << fixed << setprecision(2) << tot * 1.0 / (n - 2) <<"\n";
	return 0;
}