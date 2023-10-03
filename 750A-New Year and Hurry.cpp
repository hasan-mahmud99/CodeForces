#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int n,k,t=240,t1,c=0;
   cin>>n>>k;
   t1=k;
   for(int i=1;i<=n;i++){
    t1+=(5*i);
    if(t1>t) {
      break;
    }
    c++;

  
   }
   cout<<c;

   
}
