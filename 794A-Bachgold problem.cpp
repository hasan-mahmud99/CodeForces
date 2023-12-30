//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        for(ll i=1;i<=n/2;i++){
            cout<<"2 ";
        }
    }
    else{
        cout<<(n-1)/2<<endl;
        for(ll i=1;i<=((n-1)/2);i++){
            if(i==((n-1)/2)){
                cout<<"3";
            }
            else cout<<"2 ";

        }
    }
    
    return 0;
}
