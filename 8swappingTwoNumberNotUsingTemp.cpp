//8. WAP to Swap two numbers without using temporary variable


#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"for swap enter 1st number "<<endl;
	cin>>x;
	cout<<"for swap enter 2nd number "<<endl;
	cin>>y;
	
	cout<<"before swapping"<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"after swapping"<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;

	
	return 0;
}
