#include <bits/stdc++.h>
using namespace std;
#define strlower(str) transform(str.begin() + 1, str.end(), str.begin() + 1, ::tolower)
#define strupper(str) transform(str.begin() + 1, str.end(), str.begin() + 1, ::toupper)

int main() {
   string s;
   cin >> s;
    if (!s.empty()) {
        if (islower(s[0]) && all_of(s.begin() + 1, s.end(), ::isupper)) {
            for(int i=0;i<s.length();i++){
               if(islower(s[i])) s[i]=toupper(s[i]);
               else s[i]=tolower(s[i]);
            }
        } else if (all_of(s.begin(), s.end(), ::isupper)) {
            for(int i=0;i<s.length();i++){
               if(islower(s[i])) s[i]=toupper(s[i]);
               else s[i]=tolower(s[i]);
            }
        }

       cout << s <<endl;
    }

    return 0;
}
