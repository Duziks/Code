#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[25];
int k;
int maxn,minn;
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
	}
	cout << maxn << ' ' << minn <<"\n";
	return 0;
}