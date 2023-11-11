#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INT_TO_STRING(x) static_cast<std::ostringstream&>(std::ostringstream() << x).str()
int main(){
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++){
            cin>>a[i];
      }
      ll m=1;
      ll current=1;
      for(ll i=1;i<n;i++){
            if(a[i]>=a[i-1]){
                  current++;
                  m=max(m,current);
            }
            else {
                 current=1;
            }
                  
      }
      cout<<m;
      
}
