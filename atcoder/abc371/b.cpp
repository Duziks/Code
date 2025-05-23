#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int n,m;
int vis[105];
int k;
char c;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>k>>c;
		if(c=='M'){
			if(!vis[k]){
				printf("Yes\n");
				vis[k]=1;
			}
			else printf("No\n");
		}
		else printf("No\n");
	}
	return 0;
}