#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
       string s;
       cin>>s;
       for(int i=0;i<s.length();){
              if(s.substr(i,3)=="WUB"){
                     i+=3;
              }
              else {
                     cout<<s[i];
                     i++;
                     if(s.substr(i,3)=="WUB") cout<<" ";
              }
       }
}
