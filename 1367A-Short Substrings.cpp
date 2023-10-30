//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int t;
    cin>>t;
    while(t--){
    string a,b;
        cin>>a;
        b=a[0];
        for(int i=1;i<a.length();i++){
            if(a[i]!=a[i+1]) b+=a[i];
            else {
                b+=a[i];
                i++;
            }
        }
        cout<<b<<endl;
    }
    
   
    return 0;
}
