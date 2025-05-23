#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[110];
int maxn;
int tot;
double ans;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		if(maxn < a[i])
		{
			maxn = a[i];
		}
		tot += a[i];
	}
	ans = tot - maxn * 0.1;
	ans = ans * 0.9;
	cout << fixed << setprecision(1) << ans << "\n";
	return 0;
}