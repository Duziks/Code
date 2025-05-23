#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct Att{
	string att;
	int seq;
	int ha;
}a[1005];
struct P{
	int num[1005];
	long long tot;
	int seq;
}b[1005];
int n,m;
string name[1005];
int mp[1005];
int cmp(Att aa,Att bb)
{
	return aa.att<bb.att;
}
int cmp2(P aa,P bb)
{
	if(aa.tot>bb.tot) return 1;
	if(aa.tot<bb.tot) return 0;
	for(int i=1;i<=m;i++)
	{
		int j=a[i].seq;
		if(aa.num[j]>bb.num[j]) return 1;
		if(aa.num[j]<bb.num[j]) return 0;
	}
	return name[aa.seq]<name[bb.seq];
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>name[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>a[i].att;
		a[i].seq=i;
	}
	for(int i=1;i<=m;i++)
		cin>>a[i].ha;
	sort(a+1,a+m+1,cmp);
	for(int i=1;i<=m;i++)
	{
		mp[a[i].seq]=i;
	}
	for(int i=1;i<=n;i++)
	{
		b[i].tot=0;
		b[i].seq=i;
		for(int j=1;j<=m;j++)
		{
			cin>>b[i].num[j];
			b[i].tot+=(1ll*b[i].num[mp[j]]*a[j].ha);
		}
	}
	sort(b+1,b+n+1,cmp2);
	for(int i=1;i<=n;i++)
		cout<<b[i].seq<<" ";
	cout<<"\n";
	return 0;
}
/*
3 1
b a c
a
6
6
6
6

*/
