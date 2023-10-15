#include <bits/stdc++.h>
#define ll long long
#define strlower(str) transform(str.begin(), str.end(), str.begin(), ::tolower)
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        strlower(a);
        if(a=="yes") cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
