#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char a[200005];
map <char,char> mp;
void slove()
{
	int n;
	int ans=n;
	mp['R']='P';
	mp['S']='R';
	mp['P']='S';
	scanf("%d",&n);
	cin>>a;
	int f=0;
	int e;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=a[i-1]){
			e=i-1;
			if((e-f+1)&1){

			}
		}
	}
	return;
}
int main()
{
	int t;
	t=1;
	// scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}