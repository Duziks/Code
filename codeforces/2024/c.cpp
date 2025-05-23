#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
struct P{
	long long x;
	long long y;
}a[100005];
int cmp(P aa,P bb)
{
	int now=0;
	if(aa.x<bb.x) now++;
	if(aa.x<bb.y) now++;
	if(aa.y<bb.x) now++;
	if(aa.y<bb.y) now++;
	if(now==2) return max(aa.x,aa.y)<max(bb.x,bb.y);
	else return now>=2;
}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].x>>a[i].y;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
		cout<<a[i].x<<" "<<a[i].y<<" ";
	cout<<"\n";
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}