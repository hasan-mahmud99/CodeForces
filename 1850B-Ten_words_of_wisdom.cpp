//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a,b,c,t,i;
    cin>>t;
  while(t--)
  {
    cin>>a;
    int max=0,count=0;
    for(i=1;i<=a;i++)
    {
       cin>>b>>c;
        if(b<=10)
        {
            if(c>max)
            {
                max=c;
                count=i;
            }
 
        }
    }
    cout<<count<<endl;
  }
    return 0;
}
