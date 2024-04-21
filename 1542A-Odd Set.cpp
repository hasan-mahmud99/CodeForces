//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{   
   ll t,n,a;
   cin>>t;
   while(t--){
      ll c1=0,c2=0;
      cin>>n;
     for(int i=0;i<2*n;i++){
      cin>>a;
      if(a%2==0){
         c1++;
      }
      else{
         c2++;
      }
     }
     if(c1==c2){
      cout<<"Yes"<<endl;
     }
     else{
      cout<<"No"<<endl;
     }
   }
   return 0;
}
