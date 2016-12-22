#include<stdio.h>
#include<math.h>
void main()
{int t,i,j,n;
 long a[501][501],b[502005];
    scanf("%d",&t);
    while(t--)
    {
        long c=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {scanf("%ld",&a[i][j]);
          b[2*a[i][j]]=i;
          b[2*a[i][j]+1]=j;
        }
          for(i=2;i<2*n*n;i=i+2)
          {
              c=c+abs(b[i]-b[i+2])+abs(b[i+1]-b[i+3]);
          }
          printf("%ld\n",c);
    }
}
