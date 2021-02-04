//1. WAP to Check Prime Number using loop?

#include <iostream>
using namespace std;
int main(){
	int x,flage=0;
	cout<<"enter any number"<<endl;
	cin>>x;
	if(x==0||x==1){
		flage=1;
	}else{
		for(int i=2;i<=x/2;i++){
			if(x%i==0){
				flage=1;
				break;
			}
		}
	}
	if(flage==0){
		cout<<x<<" is prime Number"<<endl;
	}
	else{
		cout<<x<<" is not prime Number"<<endl;
	}
	
	return 0;
}

