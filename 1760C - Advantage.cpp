//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            b[i]=a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n;i++){
            if(b[i]==a[n-1]){
                cout<<b[i]-a[n-2]<<" ";
            }
            else cout<<b[i]-a[n-1]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}
