#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
const int N=31;
const int MAXN=100007;
int n;
int q;
int x,y;
int flag=0;
int a[1005][1005];
int sam[3][1005];
int vis[100008];
int l[10005];
int Vis[100008];
long long hs(char s[],int len)
{
    ll now=0;
    for(int i=1;i<=len;i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a';
        now=(now*1ll*N%MAXN+s[i])%MAXN;
    }
    return now;
}
int chec(char c)
{
    if(c>='a'&&c<='z'||c>='A'&&c<='Z') return 1;
    else return 0;
}
int main()
{
    scanf("%d",&n);
    int nn=n;
    char c;
    c=getchar();
    while(1)
    {
        while(!chec(c))
        {
            if(c=='#') {
                n--;
                memset(Vis, 0, sizeof(Vis));
            }
            if(n<=0){
                flag=1;
                break;
            }
            c=getchar();
        }
        if(flag) break;
        int t=0;
        char s[15];
        while(chec(c))
        {    
            s[++t]=c;
            c=getchar();
        }
        if (t > 10) t = 10;
        if (t >= 3) {
            int ttt = hs(s, t);
            if (!Vis[ttt]) {
                a[nn-n+1][++l[nn-n+1]]=ttt;
                Vis[ttt] = 1;
            }
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d",&x,&y);
        int tot=l[x]+l[y];
        int sum=0;
        memset(sam,0,sizeof(sam));
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=l[x];i++)
        {
            for(int j=1;j<=l[y];j++)
            {
                if(a[x][i]==a[y][j]){
                    sam[1][i]=sam[2][j]=1;
                    if(!vis[a[x][i]]){
                        sum++;
                        vis[a[x][i]]=1;
                    }
                }

            }
        }
        for(int i=1;i<=l[x];i++)
            if(sam[1][i]) tot--;
        for(int i=1;i<=l[y];i++)
            if(sam[2][i]) tot--;

        printf("%.1f",(float)100.0*sum/(sum + tot*1.0));
        putchar('%');
        printf("\n"); 
        
    }
}
/*
3
Aaa Bbb Ccc
#
Bbb Ccc Ddd
#
Aaa2 ccc Eee
is at Ddd@Fff
#
2
1 2
1 3

2
This is a test for repeated repeated words.
#
All repeated words shall be counted only once. A longlongword is the same as this longlongwo.
#
1 
1 2

2
This is a test to show ...
#
Not similar at all
#
1
1 2

2
These two files are the same
#
these.two_files are the SAME
#
1
1 2

*/
