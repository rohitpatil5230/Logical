//12. WAP to Program to Check Palindrome

#include <iostream>
#include<string.h>
using namespace std;
int main(){
	char x[20];
	int flag=0,len;
	cout<<"enter string "<<endl;
	cin>>x;
	
	len=strlen(x);
	for(int i=0;i<len;i++){
		if(x[i]!=x[len-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<x <<" is Palindrome"<<endl;
	}
	else{
		cout<<x <<" is not Palindrome"<<endl;
	}
	

	
	return 0;
}
