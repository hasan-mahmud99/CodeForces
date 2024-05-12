//hasan
#include <iostream>
#include <algorithm> // for swap function
using namespace std;

bool doIntersect(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

    return (a < c && c < b && b < d) || (c < a && a < d && d < b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << (doIntersect(a, b, c, d) ? "YES" : "NO") << endl;
    }

    return 0;
}
