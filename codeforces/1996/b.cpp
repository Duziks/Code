#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
void slove()
{
	int n;
	int k;
	char a[1005][1005];
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i+=k)
	{
		for(int j=0;j<n;j+=k)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return;

}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		slove();
	}
	return 0;
}