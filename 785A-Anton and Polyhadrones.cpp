#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,c=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="Tetrahedron") c+=4;
        else if(s=="Cube") c+=6;
        else if(s=="Octahedron") c+=8;
        else if(s=="Dodecahedron") c+=12;
        else if(s=="Icosahedron") c+=20;
    }
    cout<<c;
}

