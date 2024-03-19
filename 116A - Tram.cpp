#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m=0,max=0;
    cin >> n;
    int b,c;
    for(int i=0;i<n;i++){
        cin >> b;
        if(i==0){
            m=b;
        }
        else {
            m-=b;
           if(m>max) max=m;
        }
        cin>>c;
        m+=c;
        if(m>max) max=m;
    }
    cout<<max;


    return 0;
}
