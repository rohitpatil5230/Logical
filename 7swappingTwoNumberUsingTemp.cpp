//7. WAP to Swap two numbers using temporary variable


#include <iostream>
using namespace std;
int main(){
	int x,y,temp;
	cout<<"for swap enter 1st number "<<endl;
	cin>>x;
	cout<<"for swap enter 2nd number "<<endl;
	cin>>y;
	
	cout<<"before swapping"<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"after swapping"<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;

	
	return 0;
}
