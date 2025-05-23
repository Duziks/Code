#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int n,m,k;
int f[200005];
int tot[200005];
int now;
int a,b;
int ans;
map<pair<int,int>,int> mp;
int cnt=0;
int pa[200005];
int A[200005];
int B[200005];
int maxn;
void solve()
{
	cin>>n>>m>>k;
	ans=0;
	cnt=0;
	mp.clear();
	for(int i=1;i<=k;i++)
		f[i]=0,tot[i]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>now;
		f[now]=1;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		if(a>b){
			now=a;
			a=b;
			b=now;
		}
		if(f[a]&&f[b]) ans++;
		else{
			if(f[a]) tot[b]++;
			if(f[b]) tot[a]++;
			if(!f[a]&&!f[b]){
				if(a==b) tot[a]++;
				else{
					if(!mp[make_pair(a,b)])
					{
						mp[make_pair(a,b)]=++cnt;
						pa[cnt]=0;
						A[cnt]=a;
						B[cnt]=b;
					}
					pa[mp[make_pair(a,b)]]++;
				}
			}
		}
 	}
 	maxn=0;
 	// for(int i=1;i<=k;i++)
 	// 	cout<<tot[i]<<" ";
 	// cout<<"\n";
 	for(int i=1;i<=cnt;i++)
 	{
 		pa[i]+=tot[A[i]];
 		pa[i]+=tot[B[i]];
 		// tot[A[i]]=0;
 		// tot[B[i]]=0;
 		maxn=max(maxn,pa[i]);
 	}
 	// for(int i=1;i<=k;i++)
 	// 	cout<<tot[i]<<" ";
 	// cout<<"\n";
 	sort(tot+1,tot+k+1);
 	maxn=max(maxn,tot[k]+tot[k-1]);
 	printf("%d\n",ans+maxn);
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