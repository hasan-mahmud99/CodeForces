#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INT_TO_STRING(x) static_cast<std::ostringstream&>(std::ostringstream() << x).str()
int main(){
      ll n;
      cin>>n;
      string s;
      if(n>=0) cout<<n;
      else{
            s=INT_TO_STRING(n);
            if(s[s.length()-1]>=s[s.length()-2]) {
                  s.pop_back();
                  cout<<s;
            }
            else {
                  s.erase(s.end()-2);
                 if(s=="-0") cout<<"0";
                 else cout<<s;
            }
      }


}
