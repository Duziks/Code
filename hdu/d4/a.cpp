#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
#include<array>
using namespace std;
char b[6]={'A','B','C','D','E',' '};
void slove()
{
	int n,m;
	int h,d;
	char a[805];
	int tt;
	scanf("%d%d%d%d",&n,&m,&h,&d);
	tt=h/m%5;
	if(h%m==0) tt--;
	if(tt==-1) tt=4;
	for(int i=1;i<=(h%m==0?m:h%m);i++)
		a[i]=b[tt];
	// printf("%d %d\n",(h%m==0?m:h%m),tt);
	// for(int i=1;i<=m;i++)
	// 	cout<<a[i];
	// cout<<"ok"<<endl;
	tt--;
	if(tt==-1) tt=4;
	if(h/m==0) tt=5;
	for(int i=(h%m==0?m:h%m)+1;i<=m;i++)
		a[i]=b[tt];
	int now=(h%m==0?m:h%m);
	int t=0;
	if(d)
	while(1)
	{
		a[now]='.';
		now--;
		t++;
		if(now==0){
			if(h/m==0) break;
			now=m;
		}
		if(t>=d||t>=m) break;
	}
	// a[m+1]='/0';
	cout<<"+";
	for(int i=1;i<=m;i++)
		cout<<"-";
	cout<<"+"<<endl;
	for(int j=1;j<=n;j++)
	{
		cout<<"|";
		for(int i=1;i<=m;i++)
		cout<<a[i];
	cout<<"|\n";
	}
	cout<<"+";
	for(int i=1;i<=m;i++)
		cout<<"-";
	cout<<"+"<<endl;

	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	// t=1;
	while(t--){
		slove();
	}
	return 0;
}