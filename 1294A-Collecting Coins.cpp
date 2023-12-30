#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
    cin>>t;
    while(t--){
       ll a,b,c,n;
       cin>>a>>b>>c>>n;
       int m=max({a,b,c});
       int s=abs(a-m)+abs(b-m)+abs(c-m);
       if(((n-s)%3==0) && n>=s){
        cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;

    }
    
}
