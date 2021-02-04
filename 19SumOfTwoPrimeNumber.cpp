//19. WAP to Represent a number as Sum of Two Prime Numbers
//Input: 34 Output: 34 = 3 + 31, 34 = 5 + 29, 34 = 11 +23, 34 = 17 + 17

#include <iostream>
using namespace std;

int fun1(int i);


int main(){
	int x;
	cout<<"enter any number"<<endl;
	cin>>x;
	
	
	for(int i=0;i<=x/2;i++){
		for(int j=0;j<=x;j++){
			int sum=i+j;
			if(sum==x){
				int first=fun1(i);
				int second=fun1(j);
				if(first && second){
					cout<<x<<"="<<i<<"+"<<j<<endl;
				}
			}
		}
	}
	
	
	
	return 0;
}


int fun1(int k){
	int flage=0;
	if(k==0||k==1){
				
			flage=1;
	}else{
		for(int l=2;l<=k/2;l++){
			if(k%l==0){
				flage=1;
				break;
			}
		}
	}
	if(flage==0){
		return 1;
	}
	else{
		return 0;
	}
}

