#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,a[20001],i,s,r;
    scanf("%lld",&t);
    while(t--)
    {
        s=0;
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=m;i++)
        scanf("%lld",&a[i]);
        sort(a,a+m+1);
        for(i=1;i<=m;i++)
        {
            r=(m-i-s);
            if(a[i]>=r)
            {
                printf("%lld\n",(s+r));
                break;
            }
            else
            s=s+a[i];
        }
    }
    return 0;
}
