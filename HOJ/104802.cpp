#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long n;
int main()
{
	cin >> n;
	if(n == 1)
	{
		cout << "F\n";
		return 0;
	}
	for(long long i = 2; i * i * 1ll <= n; i ++)
		if(n % i == 0)
		{
			cout << "F\n";
			return 0;
		}
	cout << "T\n";
	return 0;
}