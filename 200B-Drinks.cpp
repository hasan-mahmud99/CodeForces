// Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    float sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum/n;
   
    return 0;
}
