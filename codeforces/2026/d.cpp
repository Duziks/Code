#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#define int long long
using namespace std;
const int MAXN=3e5+5;
int A[MAXN],sum[MAXN],n,m,a[MAXN],ans[MAXN];


int work(int l,int r) {
    int x=A[r]-A[l-1];
    x-=(sum[r]-sum[l-1])*(n-r);
    return x;
}

struct node {
    int pos,id;
    bool operator < (node x) {
        return pos<x.pos;
    }
}p[MAXN*2];

signed main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        A[i]=A[i-1]+(n-i+1)*a[i];
        sum[i]=sum[i-1]+a[i];
    } 
    cin>>m;
    for(int i=1;i<=m;i++) {
        int l,r;
        cin>>l>>r;
        p[2*i-1]=node{l-1,-i};
        p[2*i]=node{r,i};
    }
    sort(p+1,p+2*m+1);
    for(int i=1,ms=0,l=1,nw=0;i<=2*m;i++) {
        int pos=p[i].pos,id=p[i].id;
        if(pos==0) continue;
        while(pos>ms+(n-l+1)) {
            nw+=work(l,n);
            ms+=(n-l+1);
            l++;
        }
        if(id<0) ans[-id]-=nw+work(l,l+pos-ms-1);
        else ans[id]+=nw+work(l,l+pos-ms-1);
    }
    for(int i=1;i<=m;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}