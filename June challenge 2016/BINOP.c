#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long int t,i,count,diff;
    char a[1000001],b[1000001];
    scanf("%ld",&t);
    while(t--)
    {count=0;  diff=0;
    long int c_a[2],c_b[2];
    c_a[0]=0;   c_a[1]=0;   c_b[0]=0;   c_b[1]=0;
       scanf("%s %s",a,b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='0')  c_a[0]++;
        else  c_a[1]++;
        if(b[i]=='0')  c_b[0]++;
        else  c_b[1]++;
         if(a[i]!=b[i])  diff++;
    }
    if(c_a[0]==0||c_a[1]==0)  printf("Unlucky Chef\n");
    else
    {
        diff=diff-abs(c_a[0]-c_b[0]);
        count=abs(c_a[0]-c_b[0])+(diff/2);
        printf("Lucky Chef\n%ld\n",count);
    }
    }
    return 0;
}