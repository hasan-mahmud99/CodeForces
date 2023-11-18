#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int h,m;
        cin>>h>>m;
        int h1=abs(23-h);
        int m1=abs(60-m);
        cout<<(h1*60+m1)<<endl;
    }
    
    return 0;
}
