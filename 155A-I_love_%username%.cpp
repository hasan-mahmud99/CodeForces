//Hasan
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define push(n) do{\
   cin>>n;\
   for(int i=0;i<n;i++){\
      int x;\
      cin>>x;\
      v.push_back(x);\
   } \
   }while(0)

int main()
{
    vector<int> v;
    int n;
    push(n);
    int min=v[0],max=v[0],c=0;
    for(int i=0;i<n;i++){
      if(v[i]<min) {
        min=v[i];
        c++;
      }
      if(v[i]>max) {
        max=v[i];
        c++;
      }
    }
    cout<<c;
    return 0;
}
