//23. WAP to convert decimal number to binary


#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int num,temp,binaryNumber[100],i=0;
	cout<<"enter decimal Number"<<endl;
	cin>>num;
	
	temp=num;
	while(temp!=0){
		binaryNumber[i]=temp%2;
		temp/=2;
		i++;
	}
	cout<<num<<" binary number is ";
	for(int j=i-1;j>=0;j--){
		cout<<binaryNumber[j];
	}
	
	return 0;
}
