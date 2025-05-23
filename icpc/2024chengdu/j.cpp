#include<bits/stdc++.h>
using namespace std;
namespace _T{
	const int N=5e5+111;
	bool com[N],giv[N];
	int T,n,m,q,now,temp,tot,vt[N],v[N],cnt;
	struct node{
		int id;
		long long p;
	}a[N];
	void solve(){
				
		int t,x,id;
		scanf("%d",&t);
	
		switch(t){
		
			case 1:	
			scanf("%d",&x);
			now=x;
			for(int i=1;i<=cnt;i++)
				giv[v[i]]=com[v[i]]=0;
			
			cnt=0;
			temp=m;
				break;
				
				case 2:
					scanf("%d%d",&id,&x);
					if(x==now){
						if(!giv[id]){
							if(!com[id]){
								com[id]=1;v[++cnt]=id;
								if(!a[id].p) vt[++tot]=id;
								a[id].p+=temp;
								
							//	cout<<a[2].p<<endl;
								temp--;
							}
						}
					}
					break;
					
					case 3:
						scanf("%d%d",&id,&x);
					if(x==now){
						if(!com[id]){
						if(!giv[id]){
						v[++cnt]=id;
						giv[id]=1;
						}
						}
					}
						break;
						
						default: break;
		}
	}
	bool cmp(node a,node b){
		if(a.p==b.p)  return a.id<b.id;
		return a.p>b.p;
	}
void mymain(){
		scanf("%d",&T);
	
		while(T--){
			scanf("%d%d%d",&n,&m,&q);
			for(int i=1;i<=m;i++) a[i].id=i;
			for(int i=1;i<=tot;i++)
			a[vt[i]].p=0;
			tot=0;
			now=0;
			for(int j=1;j<=q;j++)
			solve();
			
		sort(a+1,a+1+m,cmp);
		
	for(int i=1;i<=m;i++) printf("%d %lld\n",a[i].id,a[i].p);
		}
		return ;
	}
}
int main(){
	_T::mymain();
	return 0;
} 