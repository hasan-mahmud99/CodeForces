#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    int t;
    cin>>t;
    while(t--){
       int n,d,c=INT_MAX;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);
       for(int i=1;i<n;i++){
        d=a[i]-a[i-1];
        if(d<c) {
            c=d;
            
            }

       }
      cout<<c<<endl;
       
    }
}
