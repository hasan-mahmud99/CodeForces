//hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool all_same = true;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[0])
            {
                all_same = false;
                break;
            }
        }
        if (all_same)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] != s[0])
                {
                    swap(s[0], s[i]);
                    break;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
