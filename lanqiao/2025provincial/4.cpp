#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int m;
int n,k;
void work()
{
	int now=1;
	int tot=0;
	k--;
	now=(1<<(n-2));
	while(now>0)
	{
		// printf(":::::%d %d\n",k,now);
		if(k/now>0){
			tot++;
			k=k%now;
		}
		now/=2;
	}
	if(tot%2==0) cout<<"RED\n";
	else cout<<"BLACK\n";
	return;
}
int main()
{
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>n>>k;
		if(n==1)
		{
			cout<<"RED\n";
			continue;
		}
		work();
	}
	return 0;
}
/*
15
1 1
2 1
2 2
3 1
3 2
3 3
3 4
4 1
4 2
4 3
4 4
4 5
4 6
4 7
4 8


*/