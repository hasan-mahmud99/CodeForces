//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int n,m=0,s=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]>m) m=a[i];

   }
   for(int i=0;i<n;i++){
      if(a[i]<m) s+=(m-a[i]);
   }
   cout<<s;

}
