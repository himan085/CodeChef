#include<stdio.h>
#include<string.h>
int main()
{
  int t,n,i;
      char str[100001];
   scanf("%d",&t);
while(t--)
{    int r=0,b=0,g=0;
    scanf("%d",&n);
    scanf("%s",&str);
    for(i=0;i<n;i++)
    {if (str[i]=='R')  r++;}
    for(i=0;i<n;i++)
    {if (str[i]=='B')  b++;}
    for(i=0;i<n;i++)
    {if (str[i]=='G')  g++;}
if(r>=b&&r>=g)  printf("%d\n",n-r);
 
else if(r<=b&&b>=g)  printf("%d\n",n-b);
 
else printf("%d\n",n-g);
 
}
return 0;
}
 