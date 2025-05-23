#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char a[100005];
map<pair<int,int>,int> mp;
void slove()
{
	int n;
	int now=0;
	scanf("%d",&n);
	cin>>a;
	mp.clear();
	int x=-1,y=0;
	// mp[make_pair(0,0)]=1;
	for(int i=0;i<strlen(a);i++)
	{
		if(now==0) x++;
		if(now==1) y++;
		if(now==2) x--;
		if(now==3) y--;
		if(a[i]=='L'){
			now++;
			now%=4;
		}
		if(a[i]=='R')
		{
			now--;
			now=now<0?now+4:now;
		}
		// printf("%d %d %d\n",x,y,now);
		if(mp[make_pair(x,y)]){
			printf("-1\n");
			return;
		}
		mp[make_pair(x,y)]=1;
	}
	if(now==0) x++;
	if(now==1) y++;
	if(now==2) x--;
	if(now==3) y--;
	if(x==0&&y==0&&now==0) printf("1\n");
	else printf("0\n");
	return;
}
int main()
{
	int t;
	// t=1;
	scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}