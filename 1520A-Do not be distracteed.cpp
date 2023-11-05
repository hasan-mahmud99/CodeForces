//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,flag=0;
      cin>>n;
      char a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      for(int i=1;i<n;i++){
         if(a[i]!=a[i-1]){
            for(int j=i-1;j>=0;j--){
               if(a[j]==a[i]){
                  flag=1;
                  break;
               }
            }
         }
      }
      if(flag==1) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
   }

}

