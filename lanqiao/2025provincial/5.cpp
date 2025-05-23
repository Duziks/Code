#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
int a[500005];
int e[500005];
int vis[500005];
int po;
int tot;
int cnt;
int t;
int tmp;
int di[500005];
long long ans=0;
long long nans=0;
long long mod=1000000007;
long long work()
{
	for(int i=1;i<=n;i++)
		e[i]=a[i];
	sort(e+1,e+n+1);
	// for(int i=1;i<=n;i++)
	// 	cout<<e[i]<<" ";
	// cout<<"\n";


	int now=1;
	t=0;
	cnt=0;
	while(e[now]==-1) now++;
	while(now<=n+1)
	{
		if(e[now]!=e[now-1])
		{
			di[++t]=cnt;
			cnt=0;
		}
		cnt++;
		now++;
	}
	nans=1;
	for(int i=2;i<=n-2;i++)
		nans*=i;
	// cout<<nans<<"\n";
	for(int i=1;i<=t;i++)
	{
		for(int j=2;j<=di[i];j++)
			nans/=j;
	}
	// for(int i=1;i<=t;i++)
	// 	cout<<di[i]<<" ";
	// cout<<"\n";
	// cout<<nans<<"\n";
	return nans%mod;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	// for(int i=1;i<=n;i++)
	// 	cout<<a[i]<<" ";
	// cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		if((n-2)%a[i]==0)
		{
			po=lower_bound(a+i+1,a+n+1,(n-2)/a[i])-a;
			if(a[i]*a[po]==(n-2)){
				if(!vis[a[i]]){
					vis[a[i]]=1;
					tmp=a[i];
					// cout<<i<<" "<<po<<"\n";
					// cout<<a[i]<<" "<<a[po]<<"\n";
					a[i]=a[po]=-1;

					// for(int i=1;i<=n;i++)
					// 	cout<<a[i]<<" ";
					// cout<<"++\n";
					// printf("tmp:%d\n",tmp);
					if(tmp*tmp==n-2)
					ans=(ans+work())%mod;
					else ans=(ans+2*work()%mod)%mod;

					// for(int i=1;i<=n;i++)
					// 	cout<<a[i]<<" ";
					// cout<<"--\n";
					a[i]=tmp;
					a[po]=(n-2)/tmp;
				}
			}
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
/*
8
2 3 2 2 2 2 2 2
*/