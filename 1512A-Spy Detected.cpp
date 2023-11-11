#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
      int t;
      cin>>t;
      while(t--){
            int n,i,flag=0;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++){
                  cin>>a[i];
            }
           for(i=1;i<n;i++){
            if(a[i]!=a[i-1] && a[i]!=a[i+1]) {
                  flag=1;
                  break;
                  }
           }
           if(flag==1) cout<<i+1<<endl;
           else cout<<"1"<<endl;
      }
}
