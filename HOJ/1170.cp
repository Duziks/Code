#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[11];
int maxn;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		maxn = max(maxn, a[i]);
	}
	for(int i = 1; i <= n; i ++)
	{
		if(a[i] == maxn)
		{
			cout << i <<"\n";
		}
	}
	return 0;
}