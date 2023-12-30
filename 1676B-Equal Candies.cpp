#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
    cin>>t;
    while(t--){
        ll n,s=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll* m=min_element(a,a+n);
        for(int i=0;i<n;i++){
            s+=(a[i]-*m);
        }
        cout<<s<<endl;
    }
    
}
