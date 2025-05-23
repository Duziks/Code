#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long n;
long long ans;
int main()
{
	cin >> n;
	int i;
	for(i = 1; i * i < n; i ++)
	{
		if(n % i == 0)
		{
			ans += i;
			ans += n / i;
		}
	}
	if(i * i == n) ans += i;
	cout << ans <<"\n";
	return 0;
}