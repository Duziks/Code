#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int n;
int a[500005];
int b[500005];
int t[500005];
int tot;
ll ans=0;
int lowbit(int aa)
{
	return aa&-aa;
}
void add(int xx,int aa)
{
	for(int i=xx;i<=n;i+=lowbit(i))
		t[i]+=aa;
}
int ask(int xx)
{
	int now=0;
	for(int i=xx;i>0;i-=lowbit(i))
		now+=t[i];
	return now;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	tot=unique(b+1,b+n+1)-b-1;
	for(int i=1;i<=n;i++)
		a[i]=lower_bound(b+1,b+tot+1,a[i])-b;
	for(int i=1;i<=n;i++)
	{
		add(a[i],1);
		ans+=(ask(tot)-ask(a[i]));
	}
	cout<<ans<<endl;
	return 0;
}