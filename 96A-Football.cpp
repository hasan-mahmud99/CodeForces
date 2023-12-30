#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
       string s;
       cin>>s;
       int c=1;
       int flag=0;
       for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            c++;
            if(c>=7) flag=1;
        }
        else c=1;
       }
      if(flag==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    
