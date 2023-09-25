//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
   cin>>t;
    while (t--) {
        char s[8][8];
        for (int i = 0; i < 8; ++i) {
            cin>>s[i];
        }
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (s[j][i] != '.') {
                    putchar(s[j][i]);
                }
            }
        }
        putchar('\n');
    }
    return 0;
}
