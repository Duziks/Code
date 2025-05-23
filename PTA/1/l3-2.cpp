#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
string s;
long long ans;
long long f[1000006][5];
int main()
{
	cin>>s;
	int n=s.length();
	s=" "+s;
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=3;j++)
		{
			f[i][j]=f[i-1][j];
			if(j) f[i][j]+=f[i-1][j-1];
			for(int k=i-1;i-k<=j;k--)
				if(s[k]==s[i])
				{
					f[i][j]-=f[k-1][j-i+k];
					break;
				}
		}
	}
	for(int i=0;i<=3;i++)
		ans+=f[n][i];
	cout<<ans<<"\n";
	return 0;
}