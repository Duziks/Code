#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
char s[1005];
int a,b,c,d;
int ans;
void slove()
{
	int n;
	scanf("%d",&n);
	cin>>s;
	a=0;
	b=0;
	c=0;
	d=0;
	ans=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='A') a++;
		if(s[i]=='B') b++;
		if(s[i]=='C') c++;
		if(s[i]=='D') d++;
	}
	ans+=min(a,n);
	ans+=min(b,n);
	ans+=min(c,n);
	ans+=min(d,n);
	printf("%d\n",ans);
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