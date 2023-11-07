#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sum1(arr) std::accumulate(arr, arr + sizeof(arr) / sizeof(arr[0]), 0)



int main()
{   
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<>());
        for(int i=0;i<k;i++){
            if(a[i]<b[i]){
                a[i]=b[i];
            }
        }
   cout<< sum1(a)<<endl;
    }

    return 0;
}
