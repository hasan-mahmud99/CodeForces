#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	

	int a[3], n, count=0,i;
	scanf("%d",&n);
	while(n--){
		{
			for(i=0;i<3;i++)
			cin>>a[i];
		}
		if((a[0]==1 && a[1]==1) || (a[1]==1 && a[2]==1) || (a[0]== 1 && a[2]==1))
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
	
	}

