#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{      int t;
       cin>>t;
       while(t--){
       int n,m;
       cin>>n>>m;
       int a=(n-2)/m;
       if(n<3) cout<<"1"<<endl;
       else if((n-2)%m==0){
        cout<<a+1<<endl;
       }
       else cout<<a+2<<endl;
      
}
}
