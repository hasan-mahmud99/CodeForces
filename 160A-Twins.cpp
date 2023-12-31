#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sum1(arr) accumulate(arr, arr + sizeof(arr) / sizeof(arr[0]), 0)
int main(){
      int n,s1=0;
      cin>>n;
      int a[n],c=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n,greater<>());
      int s=sum1(a);
      for(int i=0;i<n;i++){
        s1+=a[i];

        c++;
        if(s1>(s/2)){
            cout<<c;
            break;
        }
      }
      }
    
