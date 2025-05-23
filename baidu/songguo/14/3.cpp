#include<cstring>
#include<cstdio>
#include<cmath>
#include<iostream>
#include<map>
using namespace std;
int n,m;
char a[1005][1005];
int ans;
int bns;
int aa,bb;
int lina,linb;
map<int,int> mp;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int now=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='X')
            {
                now++;
                if(!mp[i]){
                    lina++;
                    mp[i]=1;
                }
            }
        }
        if(now%2) ans++;
    }
    mp.clear();
    for(int j=0;j<n;j++)
    {
        int now=0;
        for(int i=0;i<n;i++)
        {
            if(a[i][j]=='X')
            {
                now++;
                if(!mp[i]){
                    linb++;
                    mp[i]=1;
                }
            }
        }
        if(now%2) bns++;
    }

    cout<<max(ans,bns)<<endl;
    return 0;
}
/*
3 3
XoX
ooX
oXo
*/