#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int a=(k*l)/nl;
   int b=c*d;
   int e=p/np;
   if(a<b && a<e){
      cout<<a/n;
   }
   else if(b<a && b<e){
      cout<<b/n;
   }
   else cout<<e/n;
}
