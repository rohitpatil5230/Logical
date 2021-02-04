//12. WAP to Program to Check Palindrome

#include <iostream>
using namespace std;
int main(){
	int x,remainder,revers=0,temp;
	cout<<"enter number "<<endl;
	cin>>x;
	
	temp=x;
	while(x!=0){
		remainder=x%10;
		revers=revers*10+remainder;
		x=x/10;
	}
	if(temp==revers){
		cout<<temp <<" is Palindrome"<<endl;
	}
	else{
		cout<<temp <<" is not Palindrome"<<endl;
	}
	

	
	return 0;
}
