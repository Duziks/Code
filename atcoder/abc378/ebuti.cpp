#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
int n;
ll m;
ll a[200005];
ll b[200005];
ll bo[200005];
ll pre[200005];
ll t[200005];
ll fans;
ll ans;
int tot;
int num=0;
int lowbit(int x)
{
	return x&-x;
}
void add(int x,ll aa)
{
	for(int i=x;i<=n;i+=lowbit(i))
		t[i]+=aa;
}
ll ask(int x)
{
	ll now=0;
	for(int i=x;i>0;i-=lowbit(i))
		now+=t[i];
	return now;
}
ll msort(std::vector<ll> &a,int l,int r)
{
    if(l >= r) return 0;
    int mid = (l + r) / 2;
    msort(a,l,mid); 
    msort(a,mid+1,r);
    int i = l, j = mid + 1,k = l;
    while(i <= mid && j <= r)
    {
        if(a[i] <= a[j])  bo[k++] = a[i++];
        else {
            bo[k++] = a[j++];
            ans += (mid - i + 1);
        }
    }
    while(i <= mid) bo[k++] = a[i++];
    while(j <= r) bo[k++] = a[j++];
    for(int i = l; i <= r; i++)  a[i] = bo[i];
	return ans;
}
int main()
{
	cin>>n>>m;
	vector<ll> lwq(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		pre[i]=(pre[i-1]+a[i])%m,b[i]=pre[i],lwq[i]=b[i];
	for(int i=1;i<=n;i++)
	{
		fans+=1ll*pre[i]*i;
		fans-=1ll*pre[i-1]*(n-i+1);
	}
	// sort(b+1,b+n+1);
	// tot=unique(b+1,b+n+1)-b-1;
	// for(int i=1;i<=n;i++){
	// 	pre[i]=lower_bound(b+1,b+tot+1,pre[i])-b;
	// }
	// // for(int i=1;i<=n;i++)
	// // 	cout<<pre[i]<<" ";
	// // cout<<"\n";
	// for(int i=1;i<=n;i++)
	// {
	// 	add(pre[i],1);
	// 	num+=(ask(tot)-ask(pre[i]));
	// }
	// cout<<"num:"<<num<<"\n";
	num=msort(lwq,1,n);
	fans+=1ll*num*m;
	cout<<fans<<endl;
	return 0;
}