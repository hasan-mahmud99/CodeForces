#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
        string a;
        cin>>a;
        for(int i=0;i<a.length();i++){
           if(a[i]=='-' && a[i+1]=='.'){
             cout<<"1";
             i++;
           }
           else if(a[i]=='-' && a[i+1]=='-') {
            cout<<"2";
            i++;
            }
           else if(a[i]=='.') cout<<"0";
           

        }

    return 0;
}
