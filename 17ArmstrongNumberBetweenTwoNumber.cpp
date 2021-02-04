//17. WAP to Armstrong Numbers Between Two Integers

#include<iostream>
using namespace std;

int main(){
	int num1,num2,temp,digit=0,finalNumber=0,poww=1,digitnum;
	cout<<"enter number"<<endl;
	cin>>num1;
	cout<<"enter number"<<endl;
	cin>>num2;
	
	temp=num1;
	while(temp!=0){
		digit++;
		temp/=10;
	}
//	cout<<digit;

	for(int i=num1;i<=num2;i++){
		temp=i;	
		finalNumber=0;
		while(temp!=0){
			poww=1;
			digitnum=temp%10;
			for(int i=0;i<digit;i++){
				poww=poww*digitnum;
			}
			finalNumber=finalNumber+poww;
			temp/=10;
		}
		if(i==finalNumber){
			cout<<i<<" ";
		}
	}
		
	return 0;
}
