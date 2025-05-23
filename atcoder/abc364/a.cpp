#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
void slove()
{
	int n;
	char a[10];
	int now=0;
	int ok=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a[1]=='w'){
			if(now==1){
				if(i!=n){
					ok=0;
				}
			}
			now=1;
		}else now=0;
	}
	if(!ok) printf("No\n");
	else printf("Yes\n");
	return;

}
int main()
{
	int t;
	// scanf("%d",&t);
	t=1;
	while(t--){
		slove();
	}
	return 0;
}