#include <iostream>
using namespace std;

int main(){
	int score;
	string fullName, course;
	
    cout<<"Please enter your full name:";
	getline(cin,fullName);
	cout<<"\nPlease enter your course:";
	getline(cin,course);
	cout<<"\nPlease enter your score:";
	cin>>score;
	
	if(score>=70)
	{
		cout<< fullName <<" has grade A";
	}
	else if(score<=69&&score>=60)
	{
		cout<< fullName <<" has grade B";
	}
    else if(score<=59&&score>=50)
	{
		cout<< fullName <<" has grade C";
	}
    else if(score<=49&&score>=40)
	{
		cout<< fullName <<" has grade D";
	}
	else if(score<40){
		cout << fullName <<" has grade F";
	}
	else
	{
		cout <<" Invalid score";
	}
	return 0;
}