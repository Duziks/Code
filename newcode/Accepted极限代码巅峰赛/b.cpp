#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,k;
long long a[1000006];
long long ans;
void solve()
{
	cin>>n>>k;
	ans=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(k==1){
		for(int i=1;i<=n;i++)
			ans+=a[i];
		cout<<ans<<endl;
		return;
	}
	int t=k;
	int now=k-1;
	
	while(t<=n)
	{
		if(a[t]>=0)
		{
			if(now>=k-1)
			while(a[t]>=0&&t<=n){
				ans+=a[t];
				t++;
			}
			else{
				t+=(k-1-now);
				now=k-1;
				continue;
			}
			now=0;
		}
		now++;
		// printf("t:%d now:%d\n",t,now);
		t++;
	}
	cout<<ans<<endl;
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
/*
1
9 4
1 2 3 4 5 -1 1 1 1
 */