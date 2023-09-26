// Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll a[4],c=0;
   for(int i=0;i<4;i++){
    cin>>a[i];
   }
   sort(a,a+4);
   for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
        if(a[i]==a[j]) c++;
        break;
    }
   }
   cout<<c;

    return 0;
}
