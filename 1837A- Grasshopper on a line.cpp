#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n%k!=0){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<(n+k+1)<<" "<<-k-1<<endl;

        }
    }
    
}
