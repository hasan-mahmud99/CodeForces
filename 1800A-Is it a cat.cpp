#include <bits/stdc++.h>
#define strlower(str) transform(str.begin(), str.end(), str.begin(), ::tolower)
#define unique(v) do{\
   auto it=unique(v.begin(),v.end());\
    v.resize(distance(v.begin(), it));\
} while(0)
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    strlower(s);
    unique(s);
    if(s=="meow"){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
   }
   
    return 0;
}
