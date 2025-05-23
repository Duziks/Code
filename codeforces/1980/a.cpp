#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
int n,m;
char s[55];
int tur[555];
int ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		cin>>s;
		memset(tur,0,sizeof(tur));
		for(int i=0;i<n;i++)
		tur[s[i]]++;
		ans=0;
		for(int i='A';i<='G';i++)
		if(tur[i]<m) ans+=(m-tur[i]);
		printf("%d\n",ans);
	}
	return 0;
} 
