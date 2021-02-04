//3. WAP to Find Factorial of a number

#include <iostream>
using namespace std;
int main(){
	int x,factorial=1;
	cout<<"enter any number"<<endl;
	cin>>x;
	for(int i=1;i<=x;i++){
			factorial*=i;
	}
	cout<<x<<" factorial is "<<factorial<<endl;

	
	return 0;
}

