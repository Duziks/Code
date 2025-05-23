#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[10][10]={{0,1,-1,1,-1,-1},{-1,-1,-1,1,-1,-1},{-1,-1,-1,-1,1,1},
{-1,-1,-1,-1,-1,-1},{-1,-1,0,-1,-1,0},{-1,1,-1,-1,0,-1}};
int nbl[10],nwl[10];
int nbh[10],nwh[10];
int canl[100];
int canh[100];
int mx(int aa)
{
	if(aa>0) return aa;
	else return 0;
}
void dfs(int x,int y)
{
	cout<<x<<" "<<y<<endl;
	if(x==6&&y==0)
	{
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
				printf("%3d",a[i][j]);
			printf("\n");
		}
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
				printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int nx,ny;
	nx=(x*6+y+1)/6;
	ny=(x*6+y+1)%6;
	if(a[x][y]!=-1)
	{
		dfs(nx,ny);
		return;
	}
	//black
	if(nbh[x]<3&&nbl[y]<3&&!(x>=2&&a[mx(x-1)][y]==0&&a[mx(x-2)][y]==0)&&!(y>=2&&a[x][mx(y-1)]==0&&a[x][mx(y-2)]==0))
	{
		a[x][y]=0;
		nbh[x]++;
		nbl[y]++;
		dfs(nx,ny);
		a[x][y]=-1;
		nbh[x]--;
		nbl[y]--;
	}
	if(nwh[x]<3&&nwl[y]<3&&!(x>=2&&a[mx(x-1)][y]==1&&a[mx(x-2)][y]==1)&&!(y>=2&&a[x][mx(y-1)]==1&&a[x][mx(y-2)]==1))
	{
		a[x][y]=1;
		nwh[x]++;
		nwl[y]++;
		dfs(nx,ny);
		a[x][y]=-1;
		nwh[x]--;
		nwl[y]--;
	}
}
int main()
{
	nbl[0]=1;
	nbl[1]=0;
	nbl[2]=1;
	nbl[3]=0;
	nbl[4]=1;
	nbl[5]=1;
	nbh[0]=1;
	nbh[1]=0;
	nbh[2]=0;
	nbh[3]=0;
	nbh[4]=2;
	nbh[5]=1;

	nwl[0]=0;
	nwl[1]=2;
	nwl[2]=0;
	nwl[3]=2;
	nwl[4]=1;
	nwl[5]=1;
	nwh[0]=2;
	nwh[1]=1;
	nwh[2]=2;
	nwh[3]=0;
	nwh[4]=0;
	nwh[5]=1;

	dfs(0,0);

}