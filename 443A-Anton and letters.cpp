#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   string a;
   getline(cin,a);
   vector <char> v;
   int c = 0;
   
   for (int i = 0; i < a.size(); i++) {
      if (a[i] >= 'a' && a[i] <= 'z') {
         bool found = false;
         for (int j = 0; j < v.size(); j++) {
            if (v[j] == a[i]) {
               found = true;
               break;
            }
         }
         if (!found) {
            v.push_back(a[i]);
            c++;
         }
      }
   }
   
   cout << c;
   
   return 0;
}
