#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#define num first
#define ind second
using namespace std;
pair<int,int> a[5];
int n;
char s[5];
int chan[7];
int ans=0;
int tot;
int cmp(pair<int,int> aa,pair<int,int> bb)
{
	return aa.num>bb.num;
}
priority_queue<pair<int,int> > q;
void solve()
{
	cin>>n;
	tot=n;
	for(int i=1;i<=4;i++)
		a[i].ind=i,a[i].num=0;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s[1]=='D') a[1].num++;
		if(s[1]=='C') a[2].num++;
		if(s[1]=='H') a[3].num++;
		if(s[1]=='S') a[4].num++;
	}
	for(int i=1;i<=6;i++)
		cin>>chan[i];
	for(int i=1;i<=4;i++)
	{
		while(a[i].num>=5)
		{
			a[i].num-=5;
			tot-=5;
			ans++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		q.push(a[i]);
	}
	sort(a+1,a+5);
	int tad=chan[5]+chan[6];
	int bac=4;
	int jian;
	for(int i=4;i>=1;i--)
	{
		if(chan[a[i].ind])
		{
			if(a[i].num+3>=5)
			{
				tot-=5;
				ans++;
				jian=3;
			}
			else{
				if(a[i].num+3+tad>=5)
				{
					tot-=5;
					tad-=(5-a[i].num-3);
					jian=5-a[i].num;
					ans++;
				}
			}
			
		}
	}
	
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