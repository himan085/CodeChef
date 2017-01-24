#include<bits/stdc++.h>
using namespace std;
int main(){
    char res[1000][1000];
    int t,n,m,i,j;
    scanf("%d",&t);
    while(t--){
        int flag=0;
    scanf("%d %d",&n,&m);
 
    for(i=0;i<n;i++){
    for(j=0;j<m;j++)
    {
      cin>>res[i][j];
    }
 
     }
 
for(i=0;i<n;i++){
    if(res[i][0]=='W' || res[i][m-1]=='W'){
        flag=1;
        break;
    }
}
 
if(flag==0){
     for(i=0;i<n;i++)
     {
    for(j=0;j<m;j++){
        if(res[i][j]=='A'){
            if(i-1>=0){
                if(res[i-1][j]=='W' || res[i-1][j]=='B'){
                    flag=1;
                    break;
                }
            }
            if(j-1>=0){
                if(res[i][j-1]=='W'){
                    flag=1;
                    break;
                }
            }
            if(j+1<=m-1){
                if(res[i][j+1]=='W' ){
                    flag=1;
                    break;
                }
            }
        }
 
        if(res[i][j]=='W'){
                if(i-1>=0){
                if(res[i-1][j]=='B'){
                    flag=1;
                    break;
                }
            }
                if(i+1<=n-1){
                if(res[i+1][j]=='A'){
                    flag=1;
                    break;
                }
            }
            if(j-1>=0){
                if(res[i][j-1]=='A'){
                    flag=1;
                    break;
                }
            }
            if(j+1<=m-1){
                if(res[i][j+1]=='A' ){
                    flag=1;
                    break;
                }
            }
        }
 
 
    }
    if(flag==1) break;
}
 
}
 
if(flag==0) printf("yes\n");
else printf("no\n");
 
}
    return 0;
}
 