#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct N{
	int id;
	long long num;
} a[100005];
int n;
long long z,y,x;
int cmp(N aa,N bb)
{
	return aa.num>bb.num||aa.num==bb.num&&aa.id<bb.id;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>z>>y>>x;
		y+=(z/3);
		z%=3;
		x+=(y/3);
		y%=3;
		a[i].id=i;
		a[i].num=18*x+3*y+z;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
		cout<<a[i].id<<" ";
	cout<<"\n";
	return 0;
}