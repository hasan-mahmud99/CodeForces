//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    string a;
    cin>>a;
    int c=0;
    for(int i=0;i<a.size();i++){
        for(int k=i+1;k<a.size();k++){
            if(a[i]==a[k]) {c++;
            break;
            }
        }
        
    }
    int b=a.size()-c;
    if(b%2==0){
        cout<<"CHAT WITH HER!";
    }
    else cout<<"IGNORE HIM!";
    

    return 0;
}
