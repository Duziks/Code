#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
char a[105];
char tmp;
int pos;
void slove()
{
	cin>>a;
	// if(a[0]>='a'&&a[0]<='y') printf("z");
	// else printf("a");
	// cout<<a<<endl;
	pos=-1;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==a[i+1]){
			if(a[i]>='a'&&a[i]<='y')
				tmp='z';
			else tmp='a';
			pos=i;
		}
	}
	if(pos==-1){
			if(a[0]>='a'&&a[0]<='y') printf("z");
	else printf("a");
	cout<<a<<endl;
	}
	else{
		for(int i=0;i<strlen(a);i++)
		{
			cout<<a[i];
			if(i==pos) cout<<tmp;
		}
		cout<<"\n";
	}
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	// t=1;
	while(t--){
		slove();
	}
	return 0;
}