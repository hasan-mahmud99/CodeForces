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
        if(isupper(a[i])){
           c++; 
        }
    }
    if(c>(a.length())/2){
        transform(a.begin(),a.end(),a.begin(),::toupper);
        cout<<a;
    }
    else {
         transform(a.begin(),a.end(),a.begin(),::tolower);
        cout<<a;
    }


   
    
    
    
    return 0;
}
