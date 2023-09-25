//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    ll n;
    int k;
    cin>>n;
    cin>>k;
    for(int i=1;i<=k;i++){
        if(n%10==0){
            n=n/10;
        }
        else n=n-1;
    }
    cout<<n;
    

}
