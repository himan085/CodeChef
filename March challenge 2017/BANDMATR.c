#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t,n,i,j,M[505][505];
    scanf("%d",&t);
    while(t--){
    	ll one_count=0,count=0,ans;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    		for(j=0;j<n;j++){
    			scanf("%d",&M[i][j]);
    			if(M[i][j]==1) one_count++;
    		}
    		//cout<<one_count<<endl;
    	if(one_count==0) ans=0;
    	else if(one_count==(n*n)) ans=n-1;
    	else{
    		if((one_count-n)<=0) ans=0;
    		else{
    			 one_count-=n;
                 count=1;  n=n-1;
    			while(one_count > 0 && n>0){
    				one_count-= 2*n;
    				count++; n--;
    			}
    			ans=count-1;
    		}
    	}
    	printf("%lld\n",ans);
    }
 
 
    return 0;
}
 
 