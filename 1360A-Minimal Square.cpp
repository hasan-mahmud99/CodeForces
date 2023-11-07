#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{   
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
       int s= min(a,b);
       int m=max(a,b);
       if(s*2>=m){
        cout<<pow((s*2),2)<<endl;
       }
       else cout<<pow(m,2)<<endl;

       
    }

    return 0;
}
