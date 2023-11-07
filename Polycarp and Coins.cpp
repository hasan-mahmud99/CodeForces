#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    int t;
    cin>>t;
    while(t--){
       int n,a,b;
       cin>>n;
       a=n/3;
       if(n%3==0) b=a;
       else b=a+1;
       if((a*2+b)==n){
        cout<<b<<" "<<a<<endl;
       }
       else cout<<a<<" "<<b<<endl;
       
    }
}
