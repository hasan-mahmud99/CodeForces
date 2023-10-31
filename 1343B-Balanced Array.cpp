//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n/2;
        if(k%2==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
        
        for(int i=1;i<n/2;i++){
                cout<<(i*2)-1<<" ";
            }

            cout<<n+n/2-1<<endl;
        }

    }

    
   
    return 0;
}
