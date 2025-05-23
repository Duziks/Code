#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
int a[100005];
int ln,hn,ld,hd;
void solve()
{
	ln=ld=hn=hd=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>1)
		{
			if(a[i]<a[1]&&-1*a[i]<a[1]) ln++;
			else{
				if(a[i]<a[1]) ln++;
				if(-1*a[i]<a[1]) ln++;
			}
			if(a[i]<-1*a[1]&&-1*a[i]<-1*a[1]) ld++;
			else{
				if(a[i]<-1*a[1]) ld++;
				if(-1*a[i]<-1*a[1]) ld++;
			}

			if(a[i]>a[1]&&-1*a[i]>a[1]) hn++;
			else{
				if(a[i]>a[1]) hn++;
				if(-1*a[i]>a[1]) hn++;
			}
			if(a[i]>-1*a[1]&&-1*a[i]>-1*a[1]) hd++;
			else{
				if(a[i]>-1*a[1]) hd++;
				if(-1*a[i]>-1*a[1]) hd++;
			}
		}
	}
	if(n%2==1)
	{
		if(ln>=n/2&&hn>=n/2||ld>=n/2&&hd>=n/2)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	else{
		if(ln>=n/2-1&&hn>=n/2||ld>=n/2-1&&hd>=n/2)
			cout<<"YES\n";
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