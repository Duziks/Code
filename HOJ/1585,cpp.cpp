#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[1005];
double tot;
double minn = 1000000.0;
int ans;
double Abs(double aa)
{
	if(aa > 0) return aa;
	else return aa * -1.0;
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		tot += a[i];
	}
	tot /= n;
	for(int i = 1; i <= n; i++)
	{
		if(Abs(tot - a[i]) < minn)
		{
			minn = Abs(tot - a[i]);
			ans = a[i];
		}
	}
	cout << ans << "\n";
	return 0;
}