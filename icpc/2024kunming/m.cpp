#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct PO{
	int x;
	int y;
}a[100005];
int n;
int xc,yc,r;
double ns,ans;
int o;
int D(int x1,int y1,int x2,int y2)
{
	if(x1==x2&&x2==xc) return 0;
	if(y1==y2&&y2==yc) return 0;
	int A=y2-y1;
	int B=x1-x2;
	int C=(x2-x1)*y1-(y2-y1)*x1;
	double d=(1.0*A*xc+B*yc+C)/(1.0*sqrt(A*A+B*B));
	if(d<0) d=-1.0*d;
	// cout<<"D: "<<d<<endl;
	if(d>=1.0*r) return 1;
	else return 0;

}
int U(int x1,int y1,int x2,int y2)
{
	if(x1==x2) return -1; //
	double Y=(1.0*(xc-x1)*(y2-y1)/(x2-x1))+y1;
	if(Y<=1.0*yc) return 1;
	else return 0;
}
int check(int x1,int y1,int x2,int y2)
{

	if((U(x1,y1,x2,y2)==-1||o==-1)&&D(x1,y1,x2,y2)) return 1;
	if(D(x1,y1,x2,y2)&&U(x1,y1,x2,y2)==o) return 1;
	else return 0;
}
double S(int x1,int y1,int x2,int y2,int x3,int y3)
{
	double s;
	s=1.0*(y2-y1)*(x3-x1)-1.0*(x2-x1)*(y3-y1);
	if(s<0) return -1.0*s;
	else return s;
}
void solve()
{
	cin>>n;
	cin>>xc>>yc>>r;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].y;
	}
	int j=1;
	ans=0;
	ns=S(a[0].x,a[0].y,a[1].x,a[1].y,a[j].x,a[j].y);
	for(int i=1;i<=n;i++)
	{
		// cout<<i<<": \n";
		ns-=S(a[i-1].x,a[i-1].y,a[i].x,a[i].y,a[j].x,a[j].y);
		o=U(a[i].x,a[i].y,a[j].x,a[j].y);
		// cout<<"    ==:"<<o<<"\n";
		while(1)
		{
			int nex=j+1;
			if(nex>n) nex=1;
			if(!check(a[i].x,a[i].y,a[nex].x,a[nex].y)) break;
			ns+=S(a[i].x,a[i].y,a[nex].x,a[nex].y,a[j].x,a[j].y);
			j++;
			if(j==n+1) j=1;
			o=U(a[i].x,a[i].y,a[j].x,a[j].y);
			// cout<<j<<" "<<ns<<"\n";
		}
		ans=max(ns,ans);
		// cout<<"\n";
	}
	cout<<int(ans)<<endl;
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
/*
1
10
1 1 1
0 0
1 0
2 0
2 1
2 2
1 2
1 3
0 3
0 2
0 1
*/