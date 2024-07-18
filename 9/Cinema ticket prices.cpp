#include <iostream>
#include <string>
using namespace std;

int main(){
    int ticketPrice, age;
    string name, movie;
    
    cout << "Please enter your name\n";
    getline(cin, name);
    
    cout << "Please enter the type of movie:\n";
    getline(cin, movie);
    
    cout << "Please enter your age\n";
    cin >> age;
	    
    if(age >= 1 && age <= 9){
        if(movie == "3D"){
            cout << name << " you will pay sh500\n";
        }
        else if(movie == "regular"){
            cout << name << " you will pay sh400\n";
        }
        else {
            cout << "Invalid option.\n";
        }
    }
    else if(age >= 10 && age <= 20){
         if(movie == "3D"){
            cout << name << " you will pay sh1000\n";
        }
        else if(movie == "regular"){
            cout << name << " you will pay sh900\n";
        }
        else {
            cout << "Invalid option.\n";
        }
    }
    else if(age > 20){
	      if(movie == "3D"){
            cout << name << " you will pay sh1500\n";
        }
        else if(movie == "regular"){
            cout << name << " you will pay sh1400\n";
        }
        else {
            cout << "Invalid option.\n";
        }
	}
    else {
        cout << "Try again\n";
    }

    return 0;
}