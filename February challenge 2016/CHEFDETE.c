#include<stdio.h>
main()
{
    long killers,i,major[100001],minor[100001];
    scanf("%ld",&killers);
    for(i=0;i<killers;i++)  scanf("%ld",&major[i]);
    for(i=1;i<=killers;i++)  minor[i]=i;
 
    for(i=0;i<killers;i++)  minor[major[i]]=0;
    for(i=1;i<=killers;i++)
    {
       if(minor[i]>0)
       printf("%ld ",minor[i]);
    }
}
 