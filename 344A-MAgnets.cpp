// Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    int c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<i+2;j++){
            if(a[i]!=a[j]) c++;
        }
    }
    cout<<c;
    return 0;
}
