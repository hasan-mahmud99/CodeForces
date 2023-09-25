//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    string a;
    int c=0,c1=0;
    ll n;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++){
        if((a[i]=='A')){
            c++;
        }
        else if((a[i]=='D'))
        c1++;
    }
    if(c>c1) cout<<"Anton";
    else if(c<c1) cout<<"Danik";
    else if(c==c1) cout<<"Friendship";

}
