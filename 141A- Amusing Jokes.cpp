#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   string a,b,c,d;
   cin>>a>>b>>d;
   c=a+b;
   sort(c.begin(),c.end());
   sort(d.begin(),d.end());
   if(c==d) cout<<"YES";
   else cout<<"NO";
   
}
