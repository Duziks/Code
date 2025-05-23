#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int t;
int n,m;
int o=0;
int bgx;
int now=0x7fffffff;
int any;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		o=0;
		now=0x7fffffff;
		for(int i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			int it=s.find('#');
			if(it!=string::npos){
				if(o==0){
					o=1;
					bgx=it;
				}
				if(it<now){
					now=it;
					any=i;
				}
			}
		}
		printf("%d %d\n",any,bgx+1);
	}
	return 0;
}
