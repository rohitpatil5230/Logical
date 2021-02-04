//22. WAP to convert binary number to decimal


#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long num,temp;
	int i=0,decimalNumber=0,rem;
	cout<<"enter binary Number"<<endl;
	cin>>num;
	
	temp=num;
	while(temp!=0){
		rem=temp%10;
		decimalNumber+=pow(2,i)*rem;
		temp/=10;
		i++;
	}
	cout<<num<<" decimal number is "<<decimalNumber<<endl;
	
	return 0;
}
