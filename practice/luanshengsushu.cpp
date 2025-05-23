#include <bits/stdc++.h>

using namespace std;
bool pss(int n)
{
	int t = sqrt(n);
	bool f = 0;
	for(int i = 2; i <= t; i++)
	{
		if(n % i == 0)
		{
			f = 1;
			break;
		}
	}
	return f;
}
int main()
{
	int n;
	cin >> n;
	for(int i = 2; i <= n - 2; i++)
	{
		if(pss(i) == 0 && pss(i + 2) == 0)
			cout << i << " " << i + 2 << endl;
	}
	return 0;
}