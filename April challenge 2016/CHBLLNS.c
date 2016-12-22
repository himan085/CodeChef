#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long k,a[4],ans;
        scanf("%lld%lld%lld%lld",&a[0],&a[1],&a[2],&k);
        sort(a,a+3);
 
        if(k<=a[0])  ans=3*k-2;
        else if(k<=a[1])  ans=a[0]+2*k-1;
        else  ans=a[0]+a[1]+k;
 
        printf("%lld\n",ans);
    }
}