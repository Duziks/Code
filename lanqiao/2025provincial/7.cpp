#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
struct P{
	int x;
	int y;
	int r;
	double k;
	double l;
	double h;
}a[100005];
int n;
double tot;
double pi=3.1415926535;
int cmp(P aa,P bb)
{
	return aa.k<bb.k;
}
double L(int aa,int bb)
{
	return (double(sqrt(1.0*aa*aa+1.0*bb*bb)));
}
double Max(double aa)
{
	if(aa>0) return aa;
	else return 0;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x;
		cin>>a[i].y;
		cin>>a[i].r;
		a[i].k=double(a[i].y*1.0/a[i].x);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		double now=asin(a[i].y*1.0/L(a[i].x,a[i].y));
		double cha=asin(a[i].r*1.0/L(a[i].x,a[i].y));
		a[i].l=now-cha;
		a[i].h=now+cha;
	}
	tot+=Max(a[1].l);
	for(int i=2;i<=n;i++)
	{
		tot+=Max(a[i].l-a[i-1].h);
	}
	tot+=(Max(pi/2.0-a[n].h));
	printf("%.3f\n",tot/pi*2.0);
	return 0;
}