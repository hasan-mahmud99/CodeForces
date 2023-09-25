//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
         int c=a.size();
         string b;
        if(a.size()<=10){
            cout<<a<<endl;
        }
       
        else {
            b=a[0]+to_string(c-2)+a[c-1];
           
        }
        cout<<b<<endl;
    }



}