#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,m=-1000000000;
    int f,t;
    cin>>n>>k;
    for(int i=0;i<n;i++){
       cin>>f>>t;
        if(t>k) m=max(f+k-t,m);
        else m=max(f,m);
    }
    cout<<m;
}
