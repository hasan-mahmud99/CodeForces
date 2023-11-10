#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
       ll n,k;
       cin>>n>>k;
       ll a=n/2;
       if(n%2==0){
             if(k>a){
              cout<<2*(k-a);
             } 
             else cout<<2*k-1;
       }
       else {
              if(k>a+1){
                     cout<<2*(k-a-1);
              }
              else cout<<2*k-1;
       }
}
