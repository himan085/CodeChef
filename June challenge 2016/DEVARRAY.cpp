#include<bits/stdc++.h>
using namespace std;
int main()
{
long int i,n,q;
long int a[100001];
scanf("%ld %ld",&n,&q);
for(i=0;i<n;i++)  scanf("%ld",&a[i]);
sort(a,a+n);
while(q--)
{
    long int k;
    scanf("%ld",&k);
    if (k>=a[0]&&k<=a[n-1])  printf("Yes\n");
    else  printf("No\n");
}
return 0;
}