#include<bits/stdc++.h> 
using namespace std;
int main( )
{   
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int n=s.size();
        int ans1=0;
        for(int i=0;i<n;i++)    //ABAB
            if(i%2==0)  ans1+=s[i]=='B';
            else ans1+=s[i]=='A';
 
        int ans2=0;
        for(int i=0;i<n;i++)    //BABA
            if(i%2==0)  ans2+=s[i]=='A';
            else ans2+=s[i]=='B';
 
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}