//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n=0,d;
    int a,b;
    cin>>a>>t>>b;
    for(int i=1;i<=b;i++) {
        n+=(a*i);
    }
    if(n>t) { d=n-t;
     cout<<d;
    }
    else cout<<0;
   
    
    
    
    return 0;
}
