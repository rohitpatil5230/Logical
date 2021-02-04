//5. WAP to Display Fibonacci series up to a given number (instead of terms)
//Input: 20
//Output:0 + 1 + 1 + 2 + 3 + 5 + 8 + 13

#include <iostream>
using namespace std;
int main(){
	int x,first,second,third;
	cout<<"enter any number"<<endl;
	cin>>x;
	cout<<" Fibonacci series is "<<endl;
	for(int i=0;i<x;i++){
		if(i==0){
			first=i;
			cout<<i<<"+";
		}
		else if(i==1){
			second=i;
			cout<<i<<"+";
		}
		else if(i==x-1){
			third=first+second;
			first=second;
			second=third;
			cout<<third;
		}
		else{
			third=first+second;
			first=second;
			second=third;
			cout<<third<<"+";
		}
	}
	

	
	return 0;
}
