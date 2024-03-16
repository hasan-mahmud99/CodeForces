//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t,a[3];
    cin >> t;
    while(t--){
        for(int i=0;i<3;i++){
            cin >> a[i];
        }
        if(a[0]==a[1]) cout<<a[2]<<endl;
        else if(a[0]==a[2]) cout<<a[1]<<endl;
        else cout<<a[0]<<endl;
    }
    return 0;
}
