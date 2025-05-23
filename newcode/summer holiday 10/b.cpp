#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>
using namespace std;
char a[1005][5005];
char b[5005];
map<string,int> mp;
int cnt;
int tt;
void solve()
{
    int n,q;
    cin>>n>>q;
    getchar();
    for(int i=1;i<=n;i++)
    {
        int j=0;
        while((a[i][j]=getchar())!='\n') j++;
        a[i][j]='\0';
        // cout<<a[i]<<endl;
        int len=strlen(a[i]);
        j=len-1;
        while(a[i][j]!=' ')
        j--;
        string now="";
        j++;
        while(j<len-1)
        {
            now+=a[i][j];
            j++;
        }

        now+='\0';
        // cout<<"now:"<<now<<endl;
        mp[now]=i;
    }
    // getchar(); 
    for(int i=1;i<=q;i++)
    {
        cin>>b;
        // cout<<i<<" b:"<<b<<"*"<<endl;
        int seq[10005];
        int se=0;
        int len=strlen(b);
        string now="";
        int j=0;
        while(b[j]!='.'&&j<len)
        {
            now+=b[j];
            j++;
        }
        now+='\0';
        // cout<<"now:"<<now<<endl;
        int ni=mp[now];
        // printf("00000000 %d\n",ni);
        j++;
        for(j;j<len;j++)
        {
            if(b[j]=='f'){
                seq[++se]=1;
                j+=5;
            }
            if(b[j]=='s'){
                seq[++se]=2;
                j+=6;
            }
        }
        len=strlen(a[ni]);
        if(se==0)
        {
            int k=0;
            while(a[ni][k]!=' ')
            {
                putchar(a[ni][k]);
                k++;
            }
            putchar('\n');
            continue;
        }
        j=0;
        int ll=0;
        for(int k=1;k<=se;k++)
        {
            if(seq[k]==1)
            {
                j+=5;
            }
            if(seq[k]==2)
            {
                j+=5;
                ll=0;
                while(1)
                {
                    if(a[ni][j]=='<') ll++;
                    if(a[ni][j]=='>') ll--;
                    if(a[ni][j]==','&&ll==0)
                    {
                        break;
                    }
                    j++;
                }
                j++;
            }
        }
        ll=0;
        while(1)
        {
            
            if((a[ni][j]==','||a[ni][j]=='>')&&ll==0)
            {
                break;
            }
            putchar(a[ni][j]);
            if(a[ni][j]=='<') ll++;
            if(a[ni][j]=='>') ll--;
            j++;
        }
        putchar('\n');
    }
    return;
}
int main()
{
    int t;
    t=1;
    // scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
/*
3 3
int a;
pair<int,int> E6;
pair<pair<int,pair<double,int>>,pair<double,int>> __Fukami;
a
E6
__Fukami.first.second
*/