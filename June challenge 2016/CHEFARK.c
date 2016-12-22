#include<stdio.h>
long long int MOD=1000000007;
 
int fast_power(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_power(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int MMI(int n,int M)
{
    return fast_power(n,M-2,M);
}
int main()
{
    long long int t,n,k,j,sum,zero;
    long long int a[100000];
    long long fact[100001];
    fact[0]=1;
    long long int i=1;
 
        while(i<=100000)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        i++;
    }
    scanf("%lld",&t);
    while(t--)
    {
        long long numerator,denominator,mmi_denominator,ans;
        sum=0;  zero=0;
        scanf("%lld %lld",&n,&k);
        for(j=0;j<n;j++)
        {scanf("%lld",&a[j]);
        if(a[j]==0) zero++;
        }
        if(zero!=0) {n=n-zero+1;}
        if(k%2==0)
        {
            while(k>=2)
            {
 
                        if(n<k) {ans=0;}
                else{
                numerator=fact[n];
        denominator=(fact[k]*fact[n-k])%MOD;
        mmi_denominator=MMI(denominator,MOD);
        ans=(numerator*mmi_denominator)%MOD;
                }
 
                sum=(sum+ans)%MOD;
                k=k-2;
            }
            sum=(sum+1)%MOD;
        }
        else
        {
            while(k>=3)
            {
                if(n<k) {ans=0;}
                else{
                numerator=fact[n];
        denominator=(fact[k]*fact[n-k])%MOD;
        mmi_denominator=MMI(denominator,MOD);
        ans=(numerator*mmi_denominator)%MOD;
                }
                sum=(sum+ans)%MOD;
 
                k=k-2;
            }
            sum=(sum+n)%MOD;
        }
        printf("%lld\n",sum);
    }
    return 0;
}