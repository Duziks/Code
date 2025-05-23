#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char a[10005];
char map[10][10];
int kx,ky,KX,KY;
int dx[9]={1,-1,0,0,1,1,-1,-1};
int dy[9]={0,0,1,-1,1,-1,1,-1};
int mx[9]={2,2,-2,-2,1,1,-1,-1};
int my[9]={1,-1,1,-1,2,-2,2,-2};
int check,CHECK;
int huanghou(int x,int y,int col)
{
	int fx,fy;
	int xx,yy;
	if(col==0)
	{
		fx=kx;
		fy=ky;
	}
	else{
		fx=KX;
		fy=KY;
	}
	for(int k=0;k<8;k++)
	{
		xx=x,yy=y;
		for(int i=1;i<=8;i++)
		{
			xx+=dx[k];
			yy+=dy[k];
			if(xx>=0&&xx<8&&yy>=0&&yy<8)
			{
				if(xx==fx&&yy==fy){
					return 1;
				}
				if(map[xx][yy]!='*') break;
			}
		}
	}
	return 0;
}
int xiang(int x,int y,int col)
{
	int fx,fy;
	int xx,yy;
	if(col==0)
	{
		fx=kx;
		fy=ky;
	}
	else{
		fx=KX;
		fy=KY;
	}
	for(int k=4;k<8;k++)
	{
		xx=x,yy=y;
		for(int i=1;i<=8;i++)
		{
			xx+=dx[k];
			yy+=dy[k];
			if(xx>=0&&xx<8&&yy>=0&&yy<8)
			{
				if(xx==fx&&yy==fy){
					return 1;
				}
				if(map[xx][yy]!='*') break;
			}
		}
	}
	return 0;
}
int che(int x,int y,int col)
{
	int fx,fy;
	int xx,yy;
	if(col==0)
	{
		fx=kx;
		fy=ky;
	}
	else{
		fx=KX;
		fy=KY;
	}
	for(int k=0;k<4;k++)
	{
		xx=x,yy=y;
		for(int i=1;i<=8;i++)
		{
			xx+=dx[k];
			yy+=dy[k];
			if(xx>=0&&xx<8&&yy>=0&&yy<8)
			{
				if(xx==fx&&yy==fy){
					return 1;
				}
				if(map[xx][yy]!='*') break;
			}
		}
	}
	return 0;
}
int bing(int x,int y,int col)
{
	int fx,fy;
	int k;
	int xx,yy;
	if(col==0)
	{
		fx=kx;
		fy=ky;
		k=6;
	}
	else{
		fx=KX;
		fy=KY;
		k=4;
	}
	for(int j=1;j<=2;j++)
	{
		xx=x,yy=y;
			xx+=dx[k];
			yy+=dy[k];
			if(xx>=0&&xx<8&&yy>=0&&yy<8)
			{
				if(xx==fx&&yy==fy){
					return 1;
				}
			}
		
		k++;
	}
	return 0;
}
int ma(int x,int y,int col)
{
	int fx,fy;
	int xx,yy;
	if(col==0)
	{
		fx=kx;
		fy=ky;
	}
	else{
		fx=KX;
		fy=KY;
	}
	for(int i=0;i<8;i++)
	{
		xx=x+mx[i];
		yy=y+my[i];
		if(xx>=0&&xx<8&&yy>=0&&yy<8)
			{
				if(xx==fx&&yy==fy){
					return 1;
				}
			}
	}
	return 0;
}

void solve()
{
	cin>>a;
	int len=strlen(a);
	int nl=0,nr=0;
	CHECK=check=0;
	for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
	map[i][j]='*';
	for(int i=0;i<len;i++)
	{
		if(a[i]=='/'){
			nl++;
			nr=0;
			continue;
		}
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		map[nl][nr]=a[i];
		if(a[i]>='0'&&a[i]<='9')
		{
			nr+=(a[i]-'0'-1);
		}
		nr++;
	}
//	for(int i=0;i<8;i++)
//	{
//		for(int j=0;j<8;j++)
//		{
//			cout<<map[i][j];
//		}
//		cout<<"\n";
//	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(map[i][j]=='K'){
				KX=i;
				KY=j;
			}
			if(map[i][j]=='k')
			{
				kx=i;
				ky=j;
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(map[i][j]=='Q'){
				if(huanghou(i,j,0)){
					CHECK=1;
					break;
				}
			}
			if(map[i][j]=='q'){
				if(huanghou(i,j,1)){
					check=1;
					break;
				}
			}
			if(map[i][j]=='B'){
				if(xiang(i,j,0)){
					CHECK=1;
					break;
				}
			}
			if(map[i][j]=='b'){
				if(xiang(i,j,1)){
					check=1;
					break;
				}
			}
			if(map[i][j]=='R'){
				if(che(i,j,0)){
					CHECK=1;
					break;
				}
			}
			if(map[i][j]=='r'){
				if(che(i,j,1)){
					check=1;
					break;
				}
			}
			if(map[i][j]=='P'){
				if(bing(i,j,0)){
					CHECK=1;
					break;
				}
			}
			if(map[i][j]=='p'){
				if(bing(i,j,1)){
					check=1;
					break;
				}
			}
			if(map[i][j]=='N'){
				if(ma(i,j,0)){
					CHECK=1;
					break;
				}
			}
			if(map[i][j]=='n'){
				if(ma(i,j,1)){
					check=1;
					break;
				}
			}
			
		}
		if(CHECK||check) break;
	}
	if(CHECK) cout<<"CHECK\n";
	if(check) cout<<"check\n";
	if(!CHECK&&!check) cout<<"none\n";
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
