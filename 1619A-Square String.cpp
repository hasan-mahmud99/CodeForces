#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    int t;
    cin>>t;
    while(t--){
        string s,s1,s2;
        cin>>s;
        int a=s.length();
        if(a%2==0){
            s1=s.substr(0,a/2);
            s2=s.substr(a/2,a/2);
            if(s1==s2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
