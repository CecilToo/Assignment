#include <iostream>
using namespace std;

int main(){
	int purchase, cost, discount;
	
	cout<<"Please enter the amount of purchase:\n";
	cin>>purchase;
	
	if(purchase>10000)
	{
		cout<<"You have received a discount of sh200.\n";
		discount=200;
		cost=purchase-discount;
		cout<<"The total cost is:"<< cost;
	}
	else if(purchase<=10000&&purchase>=5001)
	{
		cout<<"You have received a discount of sh200.\n";
		discount=150;
		cost=purchase-discount;
        cout<<"The total cost is:"<< cost;
	}
    else if(purchase<=5000&&purchase>=1001)
	{
		cout<<"You have received a discount of sh200.\n";
		discount=100;
		cost=purchase-discount;
	    cout<<"The total cost is:"<< cost;
	}
    else if(purchase<=1000&&purchase>=101)
	{
		cout<<"You have received a discount of sh200.\n";
		discount=50;
		cost=purchase-discount;
        cout<<"The total cost is:"<< cost;
	}
	else if(purchase<100){
		cout<<"You have received a discount of sh200.\n";
		discount=10;
		cost=purchase-discount;
		cout<<"The total cost is:"<< cost;	
	}
	else
	{
		cout <<" Invalid purchase";
	}
	return 0;
}