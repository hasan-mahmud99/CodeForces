//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int t,c=0,c1=0,a,b;
    cin>>t;
    while(t--){
       cin>>a>>b;
       if(a>b) c++;
       else if(a<b) c1++;
        
    }
    if(c>c1) cout<<"Mishka";
    else if(c<c1) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
    return 0;
}
