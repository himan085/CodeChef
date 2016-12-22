#include<stdio.h>
#include<string.h>
main()
{
    int t;
    char a[1001],b[1001],i,j;
    scanf("%d",&t);
    while(t--)
    {int flag=0;
        scanf("%s%s",a,b);
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++)
          {
              if(a[i]==b[j])
              {flag=1;
                  printf("Yes\n");
                  break;
              }
          }
          if(flag==1)  break;
        }
         if(flag==0) printf("No\n");
    }
}
 