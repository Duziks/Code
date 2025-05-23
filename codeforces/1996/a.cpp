#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
void slove()
{
	int n;
	scanf("%d",&n);
	if(n%4==0) printf("%d\n",n/4);
	else printf("%d\n",n/4+1);
	return;

}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		slove();
	}
	return 0;
}