#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t,n,flag;
   cin>>t;
   while(t--){
      flag=0;
      cin>>n;
      int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   sort(a,a+n);
  for(int i=0;i<n-1;i++){
   if(abs(a[i]-a[i+1])>1) {
      flag=1;
      break;
   }
}
   if(flag==1) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
}
