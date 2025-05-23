#include<iostream>
#include<cstdlib>
#include<cstring>
#include<iomanip> 
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[1005];
int maxj;
int maxo;
int poi;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		if(a[i] % 2)
		{
			maxj = max(maxj, a[i]);
		}
		else
		{
			maxo = max(maxo, a[i]);
		}
	}
	for(int i = 1; i < n; i ++)
	{
		int now = 1000006;
		poi = i;
		for(int j = i; j <= n; j ++)
		{
			if(now > a[j])
			{
				now = a[j];
				poi = j;
			}
		}
		swap(a[i], a[poi]);
	}
	cout << maxj << " " << maxo << '\n';
	for(int i = 1; i <= n; i++)
		cout << a[i] << ' ';
	cout << "\n";
	return 0;
}