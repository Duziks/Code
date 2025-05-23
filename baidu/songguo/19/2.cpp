#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct P{
	int id;
	int x;
	int y;
}a[100005];
int n,m;
int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int cmp(P aa,P bb)
{
	return aa.x>bb.x||aa.x==bb.x&&aa.id<bb.id;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		// cin>>a[i].x>>a[i].y;
		a[i].x=read();
		a[i].y=read();
		a[i].id=i;
	}
	for(int i=1;i<=m;i++)
	{
		sort(a+1,a+n+1,cmp);
		for(int j=1;j<=n;j+=2)
		{
			if(a[j].y>a[j+1].y) a[j].x++;
			else a[j+1].x++;
		}
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
		cout<<a[i].id<<" ";
	cout<<endl;
	return 0;
}