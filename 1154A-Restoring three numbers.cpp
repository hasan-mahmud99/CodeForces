#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int a[4],b;
   cin>>b;
   a[0]=b;
   int max=a[0];
   for(int i=1;i<4;i++){
      cin>>a[i];
      if(a[i]>max) max=a[i];
   }
   for(int i=0;i<4;i++){
      if(a[i]==max) continue;
      else {
         cout<<max-a[i]<<" ";
   }
   }
}
