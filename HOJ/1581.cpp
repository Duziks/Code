#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[1005];
int maxn;
int minn = 0x7fffffff;
int ans;
int tot;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		maxn = max(maxn, a[i]);
		minn = min(minn, a[i]);
		tot += a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == minn)
		{
			ans += minn;
		}
	}
	ans += maxn;
	cout << ans << "\n";
	cout << tot - ans << "\n";
	return 0;
}