//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{   
    map<char, int> letterToNumber;
    char letter = 'a';
    for (int i = 1; i <= 26; ++i) {
        letterToNumber[letter] = i;
        ++letter;
    }
    ll t,n;
    cin>>t;
    while(t--){
      int max=0;
      cin>>n;
      string s;
      cin>>s;
      for(int i=0;i<n;i++){
       if(letterToNumber[s[i]]>max){
         max=letterToNumber[s[i]];
       }
      }
      cout<<max<<endl;
    }

   return 0;
}
