#include<stdio.h>
int main()
{
    long long t,n ,arr[100000],k,i,count;
    scanf("%lld",&t);
    while(t--)
    {
        count=0;  k=1;
        scanf("%lld",&n);
        for(i=0;i<n;i++)  scanf("%lld",&arr[i]);
        for(i=0;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1]) k++;
            else
            {
              count=count+k*(k+1)/2;
              k=1;
            }
        }
        count=count+k*(k+1)/2;
        printf("%lld\n",count);
    }
    return 0;
}