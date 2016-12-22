#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int t,n,k,A[100000],B[100000],i;
    scanf("%lld",&t);
    while(t--)
    {long long int sum=0;
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)  scanf("%lld",&A[i]);
        for(i=0;i<n;i++)  scanf("%lld",&B[i]);
        for(i=0;i<n;i++)
        {
        if(A[i]<0&&B[i]<0)
        {A[i]=-A[i];  B[i]=-B[i];}
        }
        for(i=0;i<n;i++)  sum=sum+A[i]*B[i];
            sort(B,B+n);
          long long int min=abs(B[0]),max=abs(B[n-1]);
 
          if(max>=min)  sum=sum+k*B[n-1];
           else  sum=sum-k*B[0];
        printf("%lld\n",sum);
    }
}
 