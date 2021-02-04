//15. WAP to Check Armstrong Number for 3 digit number
//16. WAP to Check Armstrong Number for n digit number

#include<iostream>
using namespace std;

int main(){
	int num,temp,digit=0,finalNumber=0,poww=1,digitnum;
	cout<<"enter 3 digit number"<<endl;
	cin>>num;
	temp=num;
	while(temp!=0){
		digit++;
		temp/=10;
	}
//	cout<<digit;
		
	temp=num;	
	while(temp!=0){
		poww=1;
		digitnum=temp%10;
		for(int i=0;i<digit;i++){
			poww=poww*digitnum;
		}
//		cout<<poww<<endl;
		finalNumber=finalNumber+poww;
		temp/=10;
	}
	if(num==finalNumber){
		cout<<num<<" is Armstrong Number"<<endl;
	}
	else{
			cout<<num<<" is not Armstrong Number"<<endl;
	}
//	cout<<num<<"      "<<finalNumber;
	return 0;
}
