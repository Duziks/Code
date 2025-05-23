#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
ll a, b, r;
ll temp;
int main()
{
	cin >> a >> b;
	if(a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	r = a % b;
	while(r)
	{
		a = b;
		b = r;
		r = a % b;
	}
	cout << b << endl;
	return 0;
}