#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
char s[200005];
int q;
int p,v;
int now=0;
int check(int po)
{
	if(s[po]=='1'&&s[po+1]=='1'&&s[po+2]=='0'&&s[po+3]=='0')
		return 1;
	else 
	return 0;
}
void solve()
{
	cin>>s;
	now=0;
	int len=strlen(s);
	cin>>q;
	for(int i=0;i<len;i++)
		if(check(i)) now++;
	for(int i=1;i<=q;i++)
	{
		int f=0;
		cin>>p>>v;
		p--;
		if(s[p]=='1')
		{
			if(p+3<len) if(check(p)) f=1;
			if(p-1>=0&&p+2<len) if(check(p-1)) f=1;
		}
		if(s[p]=='0')
		{
			if(p-2>=0&&p+1<len){
				if(check(p-2)) f=1;
			}
			if(p-3>=0){
				if(check(p-3)) f=1;
			}
		}
		if(f) now--;
		s[p]=(char)(v+'0');
		f=0;
		if(v==1)
		{
			if(p+3<len) if(check(p)) f=1;
			if(p-1>=0&&p+2<len) if(check(p-1)) f=1;
		}
		if(v==0)
		{
			if(p-2>=0&&p+1<len){
				if(check(p-2)) f=1;
			}
			if(p-3>=0){
				if(check(p-3)) f=1;
			}
		}
		if(f) now++;
		if(now) cout<<"YES\n";
		else cout<<"NO\n";
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
