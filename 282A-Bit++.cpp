//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int x=0,n;
    cin>>n;
    string a;   
    for(int i=1;i<=n;i++){
        cin>>a; 
        if(a=="X++"){
            x++;
        }
        else if(a=="++X") ++x;
        else if(a=="X--") x--;
        else --x;
    }
    cout<<x;

}
