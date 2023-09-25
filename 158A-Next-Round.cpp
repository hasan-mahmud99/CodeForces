//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int n, k, i, count = 0;
    cin>>n>>k;
    int a[n];
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
        k=a[k-1];
        for(i=0;i<n;i++){
        if (a[i] >=k && a[i]>0) {
            count++;
        }
    }
    cout<<count;
    return 0;
}
