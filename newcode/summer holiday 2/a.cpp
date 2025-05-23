#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
char a[5][1000006];
int ans;
int now;
int o=0;
int main()
{
	scanf("%d",&n);
	cin>>a[1];
	cin>>a[2];
	// a[1][0]='R';
	// a[2][0]='R';
	for(int i=0;i<n;i++)
	{
		if(o==0)
		{
			if(a[1][i]=='R') now++;
			if(a[2][i]=='R') now++;
			o=1;
			continue;
		}
		if(o==1)
		{
			if(a[1][i]=='R'&&a[1][i-1]=='R'||a[2][i]=='R'&&a[2][i-1]=='R'){
				if(a[1][i]=='R') now++;
				if(a[2][i]=='R') now++;
			}
			if(a[1][i]=='W'&&a[2][i]=='W') 
			{
				if(now>ans) ans=now;
				now=0;
				o=0;
			}
		}
		
	}
	if(now>ans) ans=now;
	printf("%d\n",ans-1);
	return 0;
}
/*
5
RRRWR
RWRRR
*/