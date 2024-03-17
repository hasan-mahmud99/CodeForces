#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c=0;
        string s,s1="codeforces";
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]!=s1[i]){
               c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
