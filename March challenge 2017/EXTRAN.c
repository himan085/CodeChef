#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t,n,arr[100005],i;
cin>>t;
while(t--){
cin>>n;
for( i=0;i<n;i++) cin>>arr[i];
 
sort(arr,arr+n);
if(arr[1]-arr[0]!=1){
if(arr[2]-arr[1]==1) cout<<arr[0]<<endl;
else cout<<arr[1]<<endl;
}else{
for(i=0;i<n-1;i++) {
if(arr[i+1]-arr[i]!=1) break;
}
cout<<arr[i+1]<<endl;
}
}
 
return 0;
}
 