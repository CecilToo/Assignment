#include <iostream>
using namespace std;

int main(){
	int age, bankBalance, time;
	string name, cRBStatus;
	
    cout<<"Please enter your full name:";
	getline(cin,name);
	cout<<"Please enter your age:";
	cin>>age;
	cout<<"Please enter your Bankbalance:";
	cin>>bankBalance;
	cout<<"For how long have you been a customer?";
	cin>>time;
	cout<<"What is the status of your CRB(good or bad)?:";
	cin>>(cin,cRBStatus);
	
	if(age>22&&bankBalance>50000&&cRBStatus == "good"&&time>6)
	{
		cout<< name <<" is qualified";
	}
	else
	{
		cout << name <<" is not qualified";
	}
	return 0;
}