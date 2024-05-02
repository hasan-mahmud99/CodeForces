//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{   
   ll t,n;
    cin>>t;
    while(t--)
    {
        ll c=0,m=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
       for(ll i=0;i<n;i++){
        if(a[i]==0){
            c++;
            m=(max(m,c));
        }
        else{
            c=0;
        }
        
       }
        cout<<m<<endl;
    }
   
}
