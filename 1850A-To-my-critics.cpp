//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   
  int a,b,c,t;
  cin>>t;
  while(t--)
  {
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>=10) || (b+c>=10) || (a+c>=10)) 
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}

    
