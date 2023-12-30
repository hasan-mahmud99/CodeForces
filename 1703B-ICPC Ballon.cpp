#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define unique(v) do{\
   auto it=unique(v.begin(),v.end());\
    v.resize(distance(v.begin(), it));\
} while(0)

int main()
{
	ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        sort(s);
        unique(s);
        int l=s.size();
        ll c=(l*2)+(n-l);
        cout<<c<<endl;
    }
    
}
