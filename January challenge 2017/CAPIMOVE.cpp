#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct vertex{
	ll v,popu;
};
bool comp(struct vertex a, struct vertex b) {
    return (a.popu > b.popu);
}
int main(){
    std::ios::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--){
    ll n,i;
    scanf("%lld",&n);
    struct vertex nodes[n];
    for(i=0;i<n;i++){
    scanf("%lld",&nodes[i].popu);
    nodes[i].v=i;
    }
    stable_sort(nodes,nodes+n,comp);
 
    bool hash[n];
    for(i=0;i<n;i++){
            hash[i]=false;
        }
    vector<int> g[n];
    ll u,v,j,k=n-1;
    while(k--){
    	scanf("%lld %lld",&u,&v);
    	g[u-1].push_back(v-1);
    	g[v-1].push_back(u-1);
    }
    vector<int>::iterator it;
 
    for(i=0;i<n;i++){
    	int flag=0;
    	hash[i]=true;
    	for(it=g[i].begin();it!=g[i].end();++it){
    		hash[*it]=true;
    	}
    	for(j=0;j<n;j++){
    		if(hash[nodes[j].v]==false){
             printf("%lld ",(nodes[j].v)+1);
    		 flag=1;
    		 break;
    		}
    	}
    	if(flag==0) printf("0 ");
 
        hash[i]=false;
        for(it=g[i].begin();it!=g[i].end();++it){
            hash[*it]=false;
        }
    }
 
	}
 
 
	return 0;
}
 