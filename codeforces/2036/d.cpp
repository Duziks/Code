#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int n,m;
char a[1005][1005];
int ans;
int tn,tm;
int I;
void calc(int x,int y,int h,int w)
{
	for(int i=y;i<y+w-4;i++)
		if(a[x][i]=='1'&&a[x][i+1]=='5'&&a[x][i+2]=='4'&&a[x][i+3]=='3') ans++;
	for(int i=x;i<x+h-4;i++)
		if(a[i][y+w-1]=='1'&&a[i+1][y+w-1]=='5'&&a[i+2][y+w-1]=='4'&&a[i+3][y+w-1]=='3') ans++;
	for(int i=y+w-1;i-3>=y;i--)
		if(a[x+h-1][i]=='1'&&a[x+h-1][i-1]=='5'&&a[x+h-1][i-2]=='4'&&a[x+h-1][i-3]=='3') ans++;
	for(int i=x+h-1;i-3>=x;i--)
		if(a[i][y]=='1'&&a[i-1][y]=='5'&&a[i-2][y]=='4'&&a[i-3][y]=='3') ans++;
}
void dfs(int x,int y,int dx,int dy,int now,int step)
{
	// if(I==1) printf("see:%d %d %d %d %d %d\n",x,y,dx,dy,now,step);
	// cout<<a[x][y]<<" ";
	if(step>(2*tm-2*I+2*tn-2*I+2)) return;
	if(now==0&&a[x][y]=='1') now++;
	else
	if(now==1&&a[x][y]=='5') now++;
	else
	if(now==2&&a[x][y]=='4') now++;
	else
	if(now==3&&a[x][y]=='3'){
		ans++;
		now=0;
	}else if(a[x][y]=='1') now=1;
	else now=0;
	if(x==I&&y==tm){
		dx=1;
		dy=0;
	}
	if(x==tn&&y==tm){
		dx=0;
		dy=-1;
	}
	if(x==tn&&y==I){
		dx=-1;
		dy=0;
	}
	if(x==I&&y==I){
		dx=0;
		dy=1;
	}
	// if(I==1) printf("see:%d %d %d %d %d %d\n",x+dx,y+dy,dx,dy,now,step+1);
	dfs(x+dx,y+dy,dx,dy,now,step+1);
}
void solve()
{
	cin>>n>>m;
	ans=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	tn=n-1,tm=m-1;
	int too=min(n/2,m/2);
	for(I=0;I<too;I++)
	{
		// cout<<"I: "<<I<<endl;
		dfs(I,I,0,1,0,0);
		// cout<<"\n";
		tn--;
		tm--;
	}
	
	cout<<ans<<endl;
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
/*
1
6 6
154315
315434
431513
543451
151345
345134

1
2 8
15431111
34511111

*/
