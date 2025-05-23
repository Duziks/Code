#include<cstring>
#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
int n;
string a[1005];
int ok[1005][1005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1,)
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int len;
			if(a[i].length()<a[j].length())
				len=a[i].length();
			else len=a[j].length();
			int o=1;
			for(int k=0;k<len;k++)
				if(a[i][k]!=a[j][k]){
					o=0;
					break;
				}
			if(o){

			}
		}
	}
	return 0;
}