#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
long long mod=998244353;
long long f[1000006];
const int N=1000005;
int d[N]; 
int n;
int primes[N], cnt; // primes[]存储所有素数
bool st[N];         // st[x]存储x是否被筛掉
          // d[x]表示x的约数个数
int num[N];         // num[x]表示x的最小质因数的个数
void get_primes(int n) {
    d[1] = 1; // 1的约数只有1个,这个比较特殊

    for (int i = 2; i <= n; i++) {
        if (!st[i]) {
            primes[cnt++] = i;
            // i是质数
            d[i] = 2;   //约数个数是2个，一个是1，另一个是i
            num[i] = 1; //最小质因子个数是1，最小质因子就是自己i
        }

        for (int j = 0; i * primes[j] <= n; j++) {
            st[i * primes[j]] = true;
            if (i % primes[j] == 0) {
                d[i * primes[j]] = d[i] / (num[i] + 1) * (num[i] + 2);
                num[i * primes[j]] = num[i] + 1;
                break;
            } else {
                // d[i * primes[j]] = d[i] * d[primes[j]]; 等价于下面的代码　
                d[i * primes[j]] = d[i] * 2;
                num[i * primes[j]] = 1;
            }
        }
    }
    return;
}
void slove()
{
	f[1]=1;
	for(int i=2;i<=n;i++)
	{
		// long long tot=1;
		// int tmp=i;
		// for(int j=2;j<=sqrt(i);j++)
		// {
		// 	int now=0;
		// 	while(tmp%j==0)
		// 	{
		// 		now++;
		// 		tmp/=j;
		// 	}
		// 	tot=1ll*tot*(now+1)%mod;
		// }
		// if(tmp>1){
		// 	tot=1ll*tot*2%mod;
		// }
		f[i]=1ll*(f[i-1]+d[i]-1)%mod;
	}
	for(int i=1;i<=n;i++)
		printf("%lld ",f[i]);
	printf("\n");
	return;
}
signed main()
{
	int t;
	// scanf("%d",&t);
	t=1;
	scanf("%lld",&n);
	get_primes(n);
	while(t--){

		slove();
	}
	return 0;
}