//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a;
    int c=0;
    cin>>a;
    if(a>=5) {
        if(a%5==0) {
            c=(a/5);
            cout<<c;
        }
        else {c=(a/5)+1;
        cout<<c;}
    }
    else if((a==4) || (a==3) || (a==2) || (a==1)) {
        c=1;
        cout<<c;
    }
    
    
    
    return 0;
}
