//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{  
    int a[5][5];
    int c,c1;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1) {c=(i+1),c1=(j+1);
            }
        }
    }
    cout<<(abs(3-c)+abs(3-c1));
    
    

    }

