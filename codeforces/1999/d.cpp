#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
// #include<pair>
using namespace std;
char a[200005];
char b[200005];
void slove()
{
	cin>>a;
	cin>>b;
	int j=0;
	int la=strlen(a);
	int lb=strlen(b);
	for(int i=0;i<la;i++)
	{
		if(j==lb){
			if(a[i]=='?') a[i]='a';
			continue;
		}
		if(a[i]==b[j]){
			j++;
			continue;
		}
		if(a[i]=='?')
		{
			a[i]=b[j];
			j++;
		}
	}
	if(j==lb){
		printf("YES\n");
		cout<<a<<endl;
	}
	else printf("NO\n");
	return;
}
int main()
{
	int t;
	// t=1;
	scanf("%d",&t);
	while(t--)
	{
		slove();
	}
	return 0;
}