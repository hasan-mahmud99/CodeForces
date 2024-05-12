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
        cin>>n;
        if(n%2020==0) cout<<"YES"<<endl;
        else if(n%2021==0) cout<<"YES"<<endl;
        else
        {
            while(n>0)
            {
                n-=2020;
                if(n%2021==0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                if(n<0)
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        
}
}
