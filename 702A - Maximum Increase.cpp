//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{   
    ll n,c=1,m=1;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            c++;
            m=max(m,c);
        }
        else c=1;
    }
    cout<<m;
}
