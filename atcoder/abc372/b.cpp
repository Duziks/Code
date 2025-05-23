#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
using namespace std;
int m;
int ans[105];
int t;
int main()
{
	cin>>m;
	int now=0;
	while(m)
	{
		for(int i=1;i<=m%3;i++)
			ans[++t]=now;
		m/=3;
		now++;
	}
	cout<<t<<endl;
	for(int i=1;i<=t;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}