#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,c,i;
cin>>t;
while(t--){
cin>>n;
int arr[n],j=0;
while(n--){
cin>>c;
int carr[c];
int hash[6]={0};
for(i=0;i<c;i++){
    cin>>carr[i];
    hash[carr[i]-1]++;
}
sort(hash,hash+6);
 
for(i=0;i<6;i++){
  if(hash[i]!=0){
  break;
  }
}
 
if(i==0)  arr[j++]=c+(4*hash[0])+(2*(hash[1]-hash[0]))+(hash[2]-hash[1]);
else if(i==1)  arr[j++]=c+(2*hash[1])+(hash[2]-hash[1]);
else if(i==2)  arr[j++]=c+hash[2];
else arr[j++]=c;
 
}
 
int tie=0;
int max=arr[0],max_index=0;
for(i=1;i<j;i++){
    if(arr[i]>max){
   max=arr[i];
   max_index=i;
    }
}
for(i=0;i<j;i++){
    if(arr[i]==max) tie++;
}
if(tie>=2) cout<<"tie"<<endl;
else if(max_index==0) cout<<"chef"<<endl;
else cout<<max_index+1<<endl;
 
}
return 0;
}