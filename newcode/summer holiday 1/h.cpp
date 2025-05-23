#include<cstring>
#include<cstdio>
#include<iostream>
#include<stack>
#include<cmath>
#include<map>
using namespace std;
struct N{
	string s;
	int num;
	int tim;
};N a[100005],b[100005];
int n,m;
int anum,atim,bnum,btim;
int na,nb;
map<string,int> mpa,mpb;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].s;
		cin>>a[i].num>>a[i].tim;
		if(a[i].s=="lzr010506"){
			anum=a[i].num;
			atim=a[i].tim;
		}
		mpa[a[i].s]=1;
	}
	
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		cin>>b[i].s;
		cin>>b[i].num>>b[i].tim;
		if(b[i].s=="lzr010506"){
			bnum=b[i].num;
			btim=b[i].tim;
		}
		mpb[b[i].s]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(!mpb[a[i].s]&&(a[i].num>anum||a[i].num==anum&&a[i].tim<atim)){
			na++;
			// cout<<a[i].s<<endl;
		}
	}
	// printf("\n\n");
	for(int i=1;i<=m;i++)
	{
		if(!mpa[b[i].s]&&(b[i].num>bnum||b[i].num==bnum&&b[i].tim<btim)){
			nb++;
			// cout<<b[i].s<<endl;
		}
	}
	printf("%d\n",min(na,nb)+1);
	return 0;
}