#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<map>
#define ll long long
using namespace std;
int n;
long long a[100005];
long long b[100005];
int ans;
int sta[100];
int t;
map<ll,bool> mp;
void work(ll x,ll y,ll now,int step)
{
	if(step==2)
	{
		// printf("%d %d: %d\n",x,y,now);
		if(!mp[now]){
			ans++;
			mp[now]=1;
		}
		return;
	}
	t=0;
	ll xx=x,yy=y;
	while(now)
	{
		sta[++t]=now&1;
		now>>=1;
	}
	if(step==0)
	{
		t=0;
		xx=x;yy=y;
		while(xx||yy)
		{
			t++;
			if((xx&1)==1&&(yy&1)==1)
			{
				sta[t]=1;
			}
			xx>>=1;
			yy>>=1;
		}
		now=0;
		for(int i=t;i>=1;i--){
			now<<=1;
			now+=sta[i];
		}
		work(x,y,now,step+1);


		t=0;
		xx=x;yy=y;
		while(xx||yy)
		{
			t++;
			if((xx&1)==1&&(yy&1)==1)
			{
				sta[t]=0;
			}
			xx>>=1;
			yy>>=1;
		}
		now=0;
		for(int i=t;i>=1;i--){
			now<<=1;
			now+=sta[i];
		}
		work(x,y,now,step+1);
	}
	if(step==1)
	{
		t=0;
		xx=x;yy=y;
		while(xx||yy)
		{
			t++;
			if((xx&1)!=(yy&1))
			{
				sta[t]=xx&1;
			}	
			xx>>=1;
			yy>>=1;
		}
		now=0;
		for(int i=t;i>=1;i--){
			now<<=1;
			now+=sta[i];
		}
		work(x,y,now,step+1);

		t=0;
		xx=x;yy=y;
		while(xx||yy)
		{
			t++;
			if((xx&1)!=(yy&1))
			{
				sta[t]=yy&1;
			}	
			xx>>=1;
			yy>>=1;
		}
		now=0;
		for(int i=t;i>=1;i--){
			now<<=1;
			now+=sta[i];
		}
		work(x,y,now,step+1);

		t=0;
		xx=x;yy=y;
		while(xx||yy)
		{
			t++;
			if((xx&1)!=(yy&1))
			{
				sta[t]=0;
			}	
			xx>>=1;
			yy>>=1;
		}
		now=0;
		for(int i=t;i>=1;i--){
			now<<=1;
			now+=sta[i];
		}
		work(x,y,now,step+1);

		t=0;
		xx=x;yy=y;
		while(xx||yy)
		{
			t++;
			if((xx&1)!=(yy&1))
			{
				sta[t]=1;
			}	
			xx>>=1;
			yy>>=1;
		}
		now=0;
		for(int i=t;i>=1;i--){
			now<<=1;
			now+=sta[i];
		}
		work(x,y,now,step+1);
	}

}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		memset(sta,0,sizeof(sta));
		work(a[i],a[i+1],0,0);
	}
	cout<<ans<<endl;
	return 0;
}