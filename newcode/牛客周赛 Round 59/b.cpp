#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
string a;
string b,c,d,e;
void solve()
{
	b="https://ac.nowcoder.com";
	c="https://www.nowcoder.com";
	d="ac.nowcoder.com";
	e="www.nowcoder.com";
	cin>>a;
	int i=0;
	i=0;
	for(i=0;i<b.length();i++)
	{
		if(a[i]!=b[i]) break;
	}
	if(i==b.length()){
		printf("Ac\n");
		return;
	}i=0;
	for(i=0;i<d.length();i++)
	{
		if(a[i]!=d[i]) break;
	}
	if(i==d.length()){
		printf("Ac\n");
		return;
	}i=0;
	for(i=0;i<c.length();i++)
	{
		if(a[i]!=c[i]) break;
	}
	if(i==c.length()){
		printf("Nowcoder\n");
		return;
	}i=0;
	for(i=0;i<e.length();i++)
	{
		if(a[i]!=e[i]) break;
	}
	if(i==e.length()){
		printf("Nowcoder\n");
		return;
	}
	printf("No\n");
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}