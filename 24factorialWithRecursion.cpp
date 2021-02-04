//24. WAP to Factorial of a Number Using Recursion


#include <iostream>
using namespace std;
int factorial(int n);
int main(){
	int x;
	cout<<"enter any number"<<endl;
	cin>>x;
	cout<<x<<" factorial is "<<factorial(x);

	
	return 0;
}
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
