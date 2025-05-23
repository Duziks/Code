#include<cstring>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
char a[200005];
int one,zero,two;
int minn,maxn;
void solve()
{
	zero=0;
	one=0;
	two=0;
	cin>>a;
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(i&1)
		{
			if(a[i]=='1') zero++;
			if(a[i]=='0') one++;
			if(a[i]=='2') two++;
		}
		else{
			if(a[i]=='0') zero++;
			if(a[i]=='1') one++;
			if(a[i]=='2') two++;
		}
	}
	maxn=max(one,zero);
	minn=min(one,zero);
	// cout<<maxn<<" "<<minn<<endl;
	if(two<=maxn-minn)
	{
		cout<<maxn-minn-two<<endl;
	}
	else{
		two-=(maxn-minn);
		cout<<(two&1)<<endl;
	}
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