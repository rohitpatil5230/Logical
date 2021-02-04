//20. WAP to Convert Decimal to Octal


#include<iostream>
using namespace std;

int main(){
	int num,temp,placeValue=1,octalNumber=0;
	cout<<"enter decimal Number"<<endl;
	cin>>num;
	
	temp=num;
	while(temp!=0){
		octalNumber+=placeValue*(temp%8);
		temp/=8;
		placeValue*=10;
	}
	cout<<num<<" octal number is "<<octalNumber<<endl;
	
	return 0;
}
