#include<cstdio>
#include<cstring>
#include<iostream>
#include<stack>
using namespace std;
__int128 read()
{
	__int128 x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
void out(__int128 x)
{
	if(x<0) putchar('-'),x=-x;
	stack<int> sta;
	while(x) sta.push(x%10),x/=10;
	while(!sta.empty()) putchar(sta.top()+'0'),sta.pop();
}

void solve()
{
	long long n,tot,ans;
	while(cin>>n)
	{
			tot=n/2+n/5+n/11+n/13-n/10-n/22-n/26-n/55-n/65-n/143+n/110+n/130+n/286+n/715-n/1430;
			ans=n-tot;
			out(ans);
			printf("\n");
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
		solve();
	}
	return 0;
}