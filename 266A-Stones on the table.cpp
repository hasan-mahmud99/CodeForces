#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
       int n,c=0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                c++;
            }
       }
       cout<<c;
    
}
