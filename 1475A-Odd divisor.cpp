#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long int k = n;
        bool flag = false;
        while(k!=2)
        {
            if(k%2==1) 
            {
                flag = true;
                break;
            }
            k/=2;
        }
        if(flag == true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}
