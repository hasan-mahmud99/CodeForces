#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
       string s;
       cin>>s;
       int flag=0;
       for(int i=0;i<s.length();i++){
              if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
                     flag=1;
                     break;
              }
       }
       if(flag==1) cout<<"YES";
       else cout<<"NO";
}
