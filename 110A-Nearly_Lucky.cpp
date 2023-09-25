//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    string a;
    int c=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if((a[i]=='4') || (a[i]=='7')){
            c++;
        }
    }
    if((c==4) || (c==7)) {cout<<"YES";
    }
    else cout<<"NO";

}
