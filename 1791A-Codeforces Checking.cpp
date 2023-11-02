//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
      int flag=0;
      string s="codeforces";
      char a;
      cin>>a;
      for(int i=0;i<s.length();i++){
         if(a==s[i]){
            flag=1;
            break;
         }

      }
         if(flag==1){
            cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;


   }

}

