#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 1; i < n; i++) {
            if (a[i] <= a[i - 1]) {  
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
