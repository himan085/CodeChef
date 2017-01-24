#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t,c,d,l;
cin>>t;
while(t--){
cin>>c>>d>>l;
if(c<=(2*d)){
if(l>=(4*d) && l<=(4*(c+d)) && (l%4)==0) cout<<"yes"<<endl;
else cout<<"no"<<endl;
}
else{
if(l>=(4*(d+(c-2*d))) && l<=(4*(c+d)) && (l%4)==0) cout<<"yes"<<endl;
else cout<<"no"<<endl;
}
}
return 0;
} 