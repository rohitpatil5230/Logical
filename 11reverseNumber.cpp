//11. WAP to Reverse a Number


#include <iostream>
using namespace std;
int main(){
	int x,remainder,revers=0;
	cout<<"enter number "<<endl;
	cin>>x;
	
	cout<<x<<" ";
	while(x!=0){
		remainder=x%10;
		revers=revers*10+remainder;
		x=x/10;
	}
	
	cout<<"reverse is"<<revers<<endl;


	
	return 0;
}
