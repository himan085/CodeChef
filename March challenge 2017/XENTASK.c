#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t, n , a[100000],b[100000],i,ac,bc;
cin>>t;
while(t--){ ac=0; bc=0;
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++) cin>>b[i];
 
for(i=0;i<n;i++) {
if(i%2==0){
ac+=a[i];
bc+=b[i];}
else{
ac+=b[i];
bc+=a[i];}
 
 
}
if(ac>bc) cout<<bc<<endl;
else cout<<ac<<endl;
 
}
return 0;
}
 
 