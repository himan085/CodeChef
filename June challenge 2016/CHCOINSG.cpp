#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%6==0)  cout<<"Misha\n";
        else  cout<<"Chef\n";
    }
    return 0;
}
 