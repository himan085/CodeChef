#include<stdio.h>
#include<string.h>
int main()
{
    long long w[1002],t,n,i,count;
    char str1[1002],str2[1002];
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%lld",&n);
        scanf("%s%s",str1,str2);
        for(i=0;i<=n;i++)  scanf("%lld",&w[i]);
        for(i=0;i<n;i++)
        {
            if(str1[i]==str2[i])   count++;
        }
        long long k=w[count];
        for(i=0;i<count;i++)
        {if(w[i]>k)
        k=w[i];}
        if(strcmp(str1,str2)==0)  k=w[n];
        printf("%lld\n",k);
    }
    return 0;
}
 