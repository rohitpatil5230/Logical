//21. WAP to Convert Octal to Decimal


#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num,temp,i=0,decimalNumber=0,rem;
	cout<<"enter octal Number"<<endl;
	cin>>num;
	
	temp=num;
	while(temp!=0){
		rem=temp%10;
		decimalNumber+=pow(8,i)*rem;
		temp/=10;
		i++;
	}
	cout<<num<<" Decimal number is "<<decimalNumber<<endl;
	
	return 0;
}
