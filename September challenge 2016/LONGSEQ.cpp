#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
    char str[100005];
    cin>>str;
    int k=strlen(str);
    int i,zero=0,one=0;
    for(i=0;i<k;i++)
    {
        if(str[i]=='0') zero++;
        else one++;
    }
    if(one==1 || zero==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}
 