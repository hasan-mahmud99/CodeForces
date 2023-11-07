#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
        int a,b,c,d,s1=0;
        cin>>a>>b>>c>>d;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') s1+=a;
            else if(s[i]=='2') s1+=b;
            else if(s[i]=='3') s1+=c;
            else  s1+=d;
        }
        cout<<s1;
    return 0;
}
