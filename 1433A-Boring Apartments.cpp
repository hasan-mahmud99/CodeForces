#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c = 0;
        string a, b;
        cin >> a;
          int num=1;

        while (b != a) {
          if(b.length()==4){
            b.clear();
            num++;
          }
         b+='0'+num;
            c+=b.length();
        }

        cout << c << endl;
    }

    return 0;
}
