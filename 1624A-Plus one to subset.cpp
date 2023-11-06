//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,t;
  cin>>t;
  while(t--){
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  cout<<a[n-1]-a[0]<<endl;
    
  }
  
}


