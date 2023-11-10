#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(),(X).end()
#define rev(v) reverse(all(v))

int main(){
      int n,m;
      cin>>n>>m;
      string s,s1;

      for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
              if(i==1){
                     s1+='#';
              }
              else if(i==2) { 
                      if(j==m) s+='#';
                     else s+='.';      
              }

       }
        if(i%2!=0) cout<<s1<<endl;
        else {
              cout<<s<<endl;
              rev(s);
                     
      }

}
}
