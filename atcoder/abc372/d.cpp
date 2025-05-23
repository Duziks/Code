#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
#include<stack> 
using namespace std;
int n;
int a[3000006];
int ans[3000006];
int w[3000006];
int fans[3000006];
stack<int> sta;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	sta.push(1);
	for(int i=2;i<=n;i++)
	{
		while(!sta.empty()&&a[sta.top()]<=a[i]) sta.pop();
		if(!sta.empty()) ans[i]=sta.top();
		sta.push(i);
	}
	for(int i=1;i<=n;i++)
	{
		w[ans[i]]++;
		w[i]--;
	}
	for(int i=0;i<=n;i++)
	{
		fans[i]=fans[i-1]+w[i];
	}
	for(int i=1;i<=n;i++)
	printf("%d ",fans[i]);
	printf("\n");
	return 0;
}