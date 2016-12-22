#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
  long long int t,n,c,power,i;
  scanf("%lld",&t);
    while(t--)
    {   int num[30],flag=0;
        power=0;
        scanf("%lld",&n);
       if(n>pow(5,0)&&n<=pow(5,1))   c=pow(5,1);
       else if(n>pow(5,1)&&n<=pow(5,2))   c=pow(5,2);
       else if(n>pow(5,2)&&n<=pow(5,3))   c=pow(5,3);
       else if(n>pow(5,3)&&n<=pow(5,4))   c=pow(5,4);
       else if(n>pow(5,4)&&n<=pow(5,5))   c=pow(5,5);
       else if(n>pow(5,5)&&n<=pow(5,6))   c=pow(5,6);
       else if(n>pow(5,6)&&n<=pow(5,7))   c=pow(5,7);
       else if(n>pow(5,7)&&n<=pow(5,8))   c=pow(5,8);
       else if(n>pow(5,8)&&n<=pow(5,9))   c=pow(5,9);
       else if(n>pow(5,9)&&n<=pow(5,10))   c=pow(5,10);
       else if(n>pow(5,10)&&n<=pow(5,11))   c=pow(5,11);
       else if(n>pow(5,11)&&n<=pow(5,12))   c=pow(5,12);
       else if(n>pow(5,12)&&n<=pow(5,13))   c=pow(5,13);
       else if(n>pow(5,13)&&n<=pow(5,14))   c=pow(5,14);
       else if(n>pow(5,14)&&n<=pow(5,15))   c=pow(5,15);
       else if(n>pow(5,15)&&n<=pow(5,16))   c=pow(5,16);
       else if(n>pow(5,16)&&n<=pow(5,17))   c=pow(5,17);
       else if(n>pow(5,17)&&n<=pow(5,18))   c=pow(5,18);
       //printf("power=%lld\n",c);
         int x=0;
        if(n%5==0)
        {
            if(n==5)
        {
            num[0]=8;
            x++;
        }
            n=n-1;
            c=c/5;
            while(c!=1)
            {
                num[x]=(n/c)*2;
                n=n%c;
                x++;
                if(c==5)
                {
                    num[x]=(n-1)*2+2;
                    x++;
                }
                c=c/5;
            }
        }
        else
        {
            if(n==1||n==2||n==3||n==4)
            {
                num[0]=(n-1)*2;
                x++;
            }
            else{    c=c/5;
            while(c!=1)
            {
                num[x]=(n/c)*2;
                n=n%c;
                x++;
                if(c==5)
                {
                    num[x]=(n-1)*2;
                    x++;
                }
                c=c/5;
            }
            }
        }
        for(i=0;i<x;i++)  printf("%d",num[i]);
        printf("\n");
    }
    return 0;
}