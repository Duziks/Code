#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
char a[100][100];
char b[100][100];
void solve()
{
	for(int i=0;i<8;i++)
		cin>>a[i];
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
		{
			if(a[i][j]=='#'){
				for(int k=0;k<8;k++)
					b[i][k]=b[k][j]='#';
			}
		}
		int ans=0;
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			if(b[i][j]!='#') ans++;
		cout<<ans<<endl;
	return;
}
int main()
{
	int t;
	// cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}