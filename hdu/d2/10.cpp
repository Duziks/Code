#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int t;
char a[10];
char bb[10];
char c[10];
int r,g,b;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		r=0;
		g=0;
		b=0;
		cin>>a;
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='R') r++;
			if(a[i]=='G') g++;
			if(a[i]=='B') b++;
		}
		for(int i=0;i<strlen(a);i+=2)
		bb[i/2]=a[i];
		for(int i=0;i<4;i+=2)
		c[i/2]=bb[i];
		if(c[0]==c[1]){
			cout<<c[0]<<endl;
			continue;
		}
		else{
			if(c[0]=='R'&&c[1]=='B'||c[0]=='B'&&c[1]=='R'){
				if(b>r) cout<<"B"<<endl;
				if(b<r) cout<<"R"<<endl;
				if(b==r) cout<<"N"<<endl;
			}
			if(c[0]=='R'&&c[1]=='G'||c[0]=='G'&&c[1]=='R'){
				if(g>r) cout<<"G"<<endl;
				if(g<r) cout<<"R"<<endl;
				if(g==r) cout<<"N"<<endl;
			}
			if(c[0]=='G'&&c[1]=='B'||c[0]=='B'&&c[1]=='G'){
				if(b>g) cout<<"B"<<endl;
				if(b<g) cout<<"G"<<endl;
				if(b==g) cout<<"N"<<endl;
			}
		}
	}
	return 0;
}