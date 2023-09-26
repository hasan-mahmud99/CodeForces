#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    vector<bool> levels(n, false); 
    cin >> p;
    int a;
    for (int i = 0; i < p; i++) {
        cin >> a;
        levels[a - 1] = true; 
    }
    
    cin >> q;
    int d;
    for (int i = 0; i < q; i++) {
        cin >> d;
        levels[d - 1] = true; 
    }

    bool canBecomeTheGuy = all_of(levels.begin(), levels.end(), [](bool x) { return x; });
    
    if (canBecomeTheGuy) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
