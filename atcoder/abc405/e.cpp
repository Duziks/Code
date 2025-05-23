#include<cstring>
#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
const int MOD = 998244353;
long long modpow(long long a,long long e=MOD-2)
{
    long long r=1;
    while(e)
    {
        if(e&1) r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}

int main()
{
    long long A,B,C,D;
    cin>>A>>B>>C>>D;
    long long N=A+B+C+D;
    vector<long long> fac(N+1), ifac(N+1);
    fac[0]=1;
    for(int i=1;i<=N;i++)
        fac[i]=fac[i-1]*i%MOD;
    ifac[N]=modpow(fac[N]);
    for(int i=N;i>0;i--)
        ifac[i-1]=ifac[i]*i%MOD;

    auto Cnk=[&](long long n,long long k)->long long
    {
        if (k<0||k>n) 
        	return 0;
        return fac[n]*ifac[k]%MOD*ifac[n-k]%MOD;
    };
    long long ans=0;
    for (long long k=0;k<=B;k++)
    {
        long long t1=Cnk(A+B-k-1,A-1);
        long long t2=Cnk(D+C+k,C);
        ans=(ans+t1*t2)%MOD;
    }
    cout<<ans<<"\n";
    return 0;
}
