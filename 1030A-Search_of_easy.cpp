#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n,c=0;
	bool d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1) {
			d=false;
			break;
		}
		else d=true;

	}
	if(d==false) cout<<"HARD";
	else cout<<"EASY";
	

}
