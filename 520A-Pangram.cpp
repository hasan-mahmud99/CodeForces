#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    bool t['z' + 1];
    fill(t, t + 'z' + 1, false);
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        t[s[i]] = true ;
    }
    for(int i = 'a'; i <= 'z'; i++)
    {
        if(t[i] == false)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

