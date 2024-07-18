#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num1, num2, option;
    double circle, rectangle, triangle;
	
	cout<<"Welcome to the menu:";
	cout<<"Choose between the given options:\n";
	cout<<"1.Calculate the area of a circle.\n2.Calculate the area of a rectangle.\n3.Calculate the area of a triangle.\n4.Quit.";
	cout<<"Select the option based on how it has been numbered e.g 4 is for Quit."<<endl;
	cin>>option;
	switch(option){
		case 1:
			cout<<"Enter the radius of the circle:";
			cin>>num1;
			circle=22/7*num1*num1;
			cout<<"The area of the circle is:" << circle<<endl;
			break;
		case 2:
			cout<<"Enter the length of the rectangle:";
			cin>>num1;
			cout<<"Enter the width of the rectangle:";
			cin>>num2;
            rectangle=num1*num2;
			cout<<"The area of the rectangle is:" << rectangle <<endl;
			break;
		case 3:
			cout<<"Enter the height of the triangle:";
			cin>>num1;
			cout<<"Enter the base of the triangle:";
			cin>>num2;
			triangle=0.5*num1*num2;
			cout<<"The area of the triangle is:" << triangle <<endl;
			break;
		default:
			cout<<"Quit:";
			break;
	}
	return 0;
}