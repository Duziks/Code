#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
void slove()
{
	int h,w;
	int x,y;
	char a[55][55];
	char way[1005];
	scanf("%d%d",&h,&w);
	scanf("%d%d",&x,&y);
	x--;
	y--;
	for(int i=0;i<h;i++)
		cin>>a[i];
	cin>>way;
	for(int i=0;i<strlen(way);i++)
	{
		if(way[i]=='U'){
			if(a[x-1][y]=='.') x--;
		}
		if(way[i]=='D'){
			if(a[x+1][y]=='.') x++;
		}
		if(way[i]=='L'){
			if(a[x][y-1]=='.') y--;
		}
		if(way[i]=='R'){
			if(a[x][y+1]=='.') y++;
		}
	}
	printf("%d %d\n",x+1,y+1);
	return;

}
int main()
{
	int t;
	// scanf("%d",&t);
	t=1;
	while(t--){
		slove();
	}
	return 0;
}