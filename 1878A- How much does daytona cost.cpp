#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t,n,k,c=0;
   cin>>t;
   while(t--){
    c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k) c++;
    }
   
    if(c>0) cout<<"YES\n";
    else  cout<<"NO\n";
}
}
