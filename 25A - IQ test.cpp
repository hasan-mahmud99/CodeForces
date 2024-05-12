//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
        ll n,c1=0,c2=0,f1,f2;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }    
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                c1++;
                f1=i+1;
            }
            else
            {
                c2++;
                f2=i+1;
            }
        }
        if(c1>c2)
        {
            cout<<f2;
        }
        else
        {
            cout<<f1;
        }
    return 0;
}
