#include<cstdio>
#include<iostream>
using namespace std;
long long ans;
int check(long long a)
{
	int ok=1;
	for(long long i=2;i<a;i++)
		if(a%i==0){
			ok=0;
			break;
		}
	return ok;
}
int main()
{
	int cnt=0;
	for(long long i=2;;i++)
	{
		if(check(i))
		{
			cnt++;
			if(cnt==2025)
			{
				ans=i;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}