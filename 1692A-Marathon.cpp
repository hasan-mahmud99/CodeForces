//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int a[4],t;
    cin>>t;
    while(t--){
        int c=0;
        for(int i=0;i<4;i++){
            cin>>a[i];
            if(a[i]>a[0]) c++;
        }
            cout<<c<<endl;

    }
    
   
    return 0;
}
