#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    ll a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a % b == 0) {
            cout << "0" << endl;
        } else {
            ll remainder = a % b;
            ll moves = b - remainder;
            cout << moves << endl;
        }
    }
    return 0;
}
