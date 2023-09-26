// Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    string a;
    cin>>a;
    string b;
    cin>>b;
    vector<char> v;

    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]) v.push_back('0');
        else v.push_back('1');
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    return 0;
}
