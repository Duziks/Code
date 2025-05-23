#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int a[105];
int k;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> k;
	for(int i = 1; i <= n; i++)
		if(a[i] == k){
			cout << i << "\n";
			return 0;
		}
	cout << "-1\n";
	return 0;
}