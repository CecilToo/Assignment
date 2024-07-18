#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cout <<"Please enter your first number:";
	cin>>num1;
	cout <<"\nEnter your second number:";
	cin>>num2;
	
	switch(num1>num2){
		case 1:
			cout<<num1 <<" is the maximum number"<<endl;
			break;
		default:
			switch(num1==num2){
				case 1:
					cout<<"Both numbers are equal to each other."<<endl;
					break;
				default:
					cout<<num2 <<" is the maximum number.";
			}
	}
	return 0;
}