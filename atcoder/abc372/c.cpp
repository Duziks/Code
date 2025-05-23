#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int n,q;
char s[200005];
int k;
char c;
int main()
{
	cin>>n>>q;
	cin>>s;
	int ans=0;
	for(int i=0;i<n-2;i++)
	{
		if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C') ans++;
	}
	for(int i=1;i<=q;i++)
	{
		cin>>k>>c;
		k--;
		if(s[k+1]=='B'&&s[k+2]=='C')
		{
			if(s[k]=='A'){
				if(c!='A') ans--;
			}
			else{
				if(c=='A') ans++;
			}
		}
		if(k-1>=0)
		if(s[k-1]=='A'&&s[k+1]=='C')
		{
			if(s[k]=='B'){
				if(c!='B') ans--;
			}
			else{
				if(c=='B') ans++;
			}
		}
		if(k-2>=0)
		if(s[k-2]=='A'&&s[k-1]=='B')
		{
			if(s[k]=='C'){
				if(c!='C') ans--;
			}
			else{
				if(c=='C') ans++;
			}
		}
		s[k]=c;
		// cout<<s<<endl;
		cout<<ans<<endl;
	}

	return 0;
}