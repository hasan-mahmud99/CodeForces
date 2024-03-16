//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int c1=0,c2=0;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++){
        if(s[i]=='A') c1++;
        else c2++;
       }
       if(c1<c2) cout<<"B\n";
       else cout<<"A\n";
         
    }
    return 0;
}
