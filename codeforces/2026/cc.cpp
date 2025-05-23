#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
int n;
string a;
queue<int> q;
long long tot;
int tmp;
void solve()
{
	cin>>n;
	cin>>a;
	a=" "+a;
	tot=0;
	for(int i=n;i>=1;i--)
	{
		if(a[i]=='1') q.push(i);
		else{
			tot+=i;
			if(!q.empty()) q.pop();
		}
	}
	tmp=q.size()-(q.size()+1)/2;
	while(tmp--)
	q.pop();
	while(!q.empty())
	{
		tot+=q.front();
		q.pop();
	}
	cout<<tot<<endl;
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}