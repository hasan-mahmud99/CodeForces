#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       if(s[0]=='b' && s[2]=='a') cout<<"NO"<<endl;
       else if(s[0]=='c' && s[2]=='b') cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    
}
