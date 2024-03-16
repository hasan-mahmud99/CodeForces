//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t,n;
    cin >> t;
    while(t--){
       cin>>n;
       int a[n],s=0;
         for(int i=0;i<n;i++){
              cin>>a[i];
              if(a[i]<0) s+=a[i]*-1;
              else s+=a[i];
         }
         cout<<s<<endl;
         
    }
    return 0;
}
