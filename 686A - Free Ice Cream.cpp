#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll n,i,c=0;
    cin >> n>>i;
    ll s=i;
    for(ll i=0;i<n;i++){
        char ch;
        cin>>ch;
        ll k;
        cin>>k;
        if(ch=='+'){
            s+=k;
        }
        else{
            if(s<k){
                c++;
            }
           else  s-=k;
    }
    }
    cout<<s<<" "<<c;

    return 0;
}
