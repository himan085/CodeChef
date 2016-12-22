#include<bits/stdc++.h>
using namespace std;
long arr[100001],tree[300001];
 
long lpd(long n){long i;
if(n==1) return 1;
else if(n%2==0) return 2;
else if(n%3==0) return 3;
else if(n%5==0) return 5;
else{
for (i = 7; i <= sqrt(n); i = i+2){
if(n%i==0) return i;
}
}
return n;
}
//building tree
void build(long node,long start,long end){
if (start > end) return;
if(start==end){
tree[node]=lpd(arr[start]);
return;
}
else{
long mid=(start+end)/2;
build(2*node,start,mid);
build(2*node+1,mid+1,end);
tree[node]=max(tree[2*node],tree[2*node+1]);
}
}
//end
 
//update
void update(long node,long start,long end,long l,long r){
if(start>end || start>r || end<l) return;
if(tree[node]==1 ) return;
 
if(start==end){
   arr[start]=arr[start]/lpd(arr[start]);
tree[node]=lpd(arr[start]);
return;
}
 
long mid=(start+end)/2;
update(node*2,start,mid,l,r);
update(node*2+1,mid+1,end,l,r);
tree[node]=max(tree[2*node],tree[2*node+1]);
 
}
//end
 
//get max_prime
long get(long node,long start,long end,long l,long r){
if(r<start || end<l) return -1;
if(tree[node]==1) return 1;
if(l<=start && end<=r) return tree[node];
 
long mid=(start+end)/2;
long p1=get(2*node,start,mid,l,r);
long p2=get(2*node+1,mid+1,end,l,r);
 
return max(p1,p2);
}
//end
 
int main(){
 
long t,n,m,i,type,l,r;
scanf("%ld",&t);
 
while(t--){
scanf("%ld %ld",&n,&m);
 
for(i=0;i<n;i++) scanf("%ld",&arr[i]);
 
build(1,0,n-1);
//for(i=1;i<=3*n;i++) printf("%ld  ",tree[i]);
while(m--){
scanf("%ld %ld %ld",&type,&l,&r);
if(type==0){
update(1,0,n-1,l-1,r-1);
//for(i=1;i<=3*n;i++) printf("%ld  ",tree[i]);
}
else{
long ans=get(1,0,n-1,l-1,r-1);
printf("%ld ",ans);
}
}
printf("\n");
}
 
return 0;
}
 