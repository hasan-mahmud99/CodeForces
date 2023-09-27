//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int hundread=n/100;
    n%=100;
    int tweenty=n/20;
    n%=20;
    int ten=n/10;
    n%=10;
    int five=n/5;
    n%=5;
    int one =n;
    cout<<tweenty+hundread+ten+five+one;

        
    return 0;
}
