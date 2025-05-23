#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
ll n;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
		if(n % i == 0) cout << i << "\n";
	return 0;
}