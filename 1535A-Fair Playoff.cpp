#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    int t;
    cin>>t;
    while(t--){
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int m1=max(a,b);
       int mi1=min(a,b);
       int m2=max(c,d);
       int mi2=min(c,d);
       if(mi1>m2 || mi2>m1 ) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
}
