//9. WAP to Check whether an alphabet is vowel or consonan


#include <iostream>
using namespace std;
int main(){
	char x;
	cout<<"enter one alphabet "<<endl;
	cin>>x;
	
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
		cout<<x<<" is vowel"<<endl;
	}
	else{
		cout<<x<<" is consonam"<<endl;
	}


	
	return 0;
}
