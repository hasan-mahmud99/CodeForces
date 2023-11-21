#include<bits/stdc++.h>

using namespace std;

int main(void){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, po;
    cin >> n;
    string s;
    bool f = false;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!f)
        {        
            if ((arr[i][0] == 'O' && arr[i][1] == 'O'))
            {
                f = true;
                arr[i][0] = '+';
                arr[i][1] = '+';
            }
            else if(arr[i][3] == 'O' && arr[i][4] == 'O' ){
                f = true;
                arr[i][3] = '+';
                arr[i][4] = '+';
            }
        }
        
    }
    if (!f)
    {
        cout << "NO\n";
        return 0;
    }
    else{
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << '\n'; 
        }
    }
    return 0;
}
