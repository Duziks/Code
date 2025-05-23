#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[101];
int maxn;
int maxp = 1;
int minn = 0x7fffffff;
int minp = 1;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		if(maxn < a[i])
		{
			maxn = a[i];
			maxp = i;
		}
		if(minn > a[i])
		{
			minn = a[i];
			minp = i;
		}
	}
	cout << maxp << " " << minp << "\n";
	return 0;
}