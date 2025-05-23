#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
void solve()
{
	string s;
    cin>>s;
    int n=s.size();
    int ansa=0;
    for(int i=0;i<n;i++)
        if(i%2==0)  
        	ansa+=s[i]=='B';	
        else 
        ansa+=s[i]=='A';
    int ansb=0;
    for(int i=0;i<n;i++)
        if(i%2==0)  ansb+=s[i]=='A';
        else ansb+=s[i]=='B';

    cout<<min(ansa,ansb)<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}