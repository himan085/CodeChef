#include<stdio.h>
#include<string.h>
int main()
{
    int t,x,y,flag,k;
     char str[12500];
    scanf("%d",&t);
    while(t--){
    scanf("%s",&str);
     k=strlen(str);
 
   x=0;  y=k-1;  flag=0;
 
  while(x<y){
  if(str[x]=='.' && str[y]=='.'){
     str[x]='a';
     str[y]='a';
  }
    if(str[x]=='.' && str[y]!='.')  str[x]=str[y];
    if(str[x]!='.' && str[y]=='.')  str[y]=str[x];
    if((str[x]!='.' && str[y]!='.')&&(str[x]!=str[y])){
    flag=1;
    break;
    }
    x++;
    y--;
  }
if(k%2==1 && flag==0){
if(str[x]=='.') str[x]='a';
}
  if(flag==0) printf("%s\n",str);
  else printf("-1\n");
 
    }
    return 0;
}