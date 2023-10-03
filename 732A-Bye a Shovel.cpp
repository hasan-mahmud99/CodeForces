#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int k,r,c=1;
   cin>>k>>r;
   int temp=k;
  for(int i=0;i<1000;i++){
   if(k%10==0 || k%10==r){
      break;
   }
   else {k+=temp;
   c++;
  }
  }
   cout<<c;
}
