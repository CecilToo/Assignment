#include <iostream>
using namespace std;

int main(){
	string FullName, courseName;
	int score;
	
	cout<<"Enter your full name:\n";
	getline(cin,FullName);
	cout<<"Enter your course name:\n";
	getline(cin,courseName);
	cout<<"Enter your score:\n";
	cin>>score;
	
	if (score>=70){
		score=1;
	}
    else if(score<=69&&score>=60){
		score=2;
	}
	else if(score<=59&&score>=50){
		score=3;
	}
	else if(score<=49&&score>=40){
		score=4;
	}
	else if(score<40){
		score=5;
	}
	
	
	switch(score)
	{
	case 1:
		cout<< FullName <<" has grade A:";
		break;
	case 2:
		cout<< FullName <<" has grade B:";
		break;
	case 3:
		cout<< FullName <<" has grade c:";
		break;
    case 4:
		cout<< FullName <<" has grade D:";
		break;
	case 5:
		cout<< FullName <<" has grade F:";
		break;
	default:
		cout<<"Invalid score.";
		break;
	}
}