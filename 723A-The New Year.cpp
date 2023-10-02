#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int a[3];
   for(int i=0;i<3;i++){
    cin>>a[i];
   }
   sort(a,a+3);
   int d=abs(a[1]-a[0])+abs(a[1]-a[2]);
   cout<<d;
}
