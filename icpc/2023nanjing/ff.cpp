#include<bits/stdc++.h>
using namespace std;
namespace _T{
    const int N=1e5+111;
    int n,m,y,flag,b[N],num[N],ant[N],T;
    vector<int> c[N],v[N];
    void mymain(){
        scanf("%d",&T);
        while(T--){
            memset(ant,0,sizeof(ant));
            y=0;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)    c[i].clear(),v[i].clear();
        for(int i=1;i<=n;i++) num[i]=i;
        for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
        int t;
        for(int j=1;j<=b[i];j++){
        scanf("%d",&t);
        c[i].push_back(t);
        ant[t]=i;    
        }     
        }
        
        for(int i=1;i<=m;i++)
         if(ant[i])
        v[ant[i]].push_back(i);
        
        for(int i=n;i>1;i--){
            flag=0;
        for(int k=0;k<v[i].size();k++){
            int p=v[i][k];
            for(int l=0;l<c[i-1].size();l++)
            if(c[i-1][l]==p) {flag=1;break;}
         if(flag) break;}
         if(!flag) {swap(num[i],num[i-1]);y=1;break;}
        
        }
        if(y){puts("Yes");
            for(int i=1;i<n;i++) printf("%d ",num[i]);
            printf("%d\n",num[n]);
        }
        else {puts("No");}
    
        }
    
        return;
    }
}
int main(){
    _T::mymain();
    return 0;
}