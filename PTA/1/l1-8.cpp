#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
struct N{
	string s;
	int num;
};N a[10005];
int n;
double tot=0;
int ans;
string name;
double Abs(double aa)
{
	if(aa>0) return aa;
	else return aa*-1.0;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].s>>a[i].num;
		tot+=a[i].num;
	}
	tot=(tot/2.0/n);
	ans=0x7fffffff*1.0;
	for(int i=1;i<=n;i++)
	{
		if(Abs(1.0*a[i].num-tot)<ans){
			ans=Abs(1.0*a[i].num-tot);
			name=a[i].s;
		}
	}

	cout<<(int)tot<<" "<<name<<"\n";
	return 0;
}