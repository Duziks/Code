#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
ll n;
double k;
double ans;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> k;
		ans += k;
	}
	if (ans >= 500.0) ans = ans * 0.8;
	else if (ans >= 300.0) ans = ans * 0.9;
	printf("%.1f\n", ans * 1.0 );
	return 0;
}