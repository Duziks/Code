#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int t;
char s[100005],c[100005];
int idx[100005];
map<int,int> id;
int n,m;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		id.clear();
		scanf("%d%d",&n,&m);
		cin>>s;
		for(int i=0;i<m;i++)
		scanf("%d",&idx[i]);
		cin>>c;
		for(int i=0;i<m;i++)
		id[idx[i]-1]++;
		sort(c,c+m);
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(id[i]>0) s[i]=c[cnt++];
		 } 
		 cout<<s<<endl;
	 }
	 return 0;
}
