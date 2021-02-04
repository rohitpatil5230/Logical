//14. WAP to Display Prime Numbers Between two Intervals

#include <iostream>
using namespace std;
int main(){
	int x,y,flage=0;
	cout<<"enter any number"<<endl;
	cin>>x;
	cout<<"enter any number"<<endl;
	cin>>y;
	for(int i=x;i<=y;i++){
		flage=0;
		if(i==0||i==1){
				
			flage=1;
		}else{
			for(int j=2;j<=i/2;j++){
				if(i%j==0){
					flage=1;
					break;
				}
			}
		}
		if(flage==0){
			cout<<i<<" ";
		}
		
	}
	
	
	
	return 0;
}

