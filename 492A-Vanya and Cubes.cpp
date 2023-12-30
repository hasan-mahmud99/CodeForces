#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int h=0;
	int c=0;
	cin>>n;
	while(c<=n)
	{   h++;
		c=c+(h*(h+1))/2;
	}
	cout<<h-1<<endl;
}
