#include<iostream>
using namespace std;

int main()
{
	int w;
	cin>>w;
	if(w%2==0 && w!=2)		//2 is a boundary condition
		cout<<"YES";		//2=1+1 ! is odd
	else
		cout<<"NO";
	return 0;
}
