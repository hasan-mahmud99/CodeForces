#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i+=3){
        int flag=0;
    for(int j=i;j<i+3;j++){
        if((a[j]+k)>5) flag=1;
    }
    if(flag==0) c++;
    }
    cout<<c;
    return 0;
}
    
