#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
      int n,c=1;
      int flag=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      for(int i=1;i<n;i++){
       if(a[i]==a[i-1]){
        c++;
        if(c==3){
            flag=1;
            cout<<a[i]<<endl;
            break;
        }
       }
       else c=1;
      }
      if(flag==0) cout<<-1<<endl;
    }
    return 0;
}
