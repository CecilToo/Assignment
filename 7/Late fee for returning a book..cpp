#include <iostream>
#include <string>
using namespace std;

int main(){
    int daysLate;
    string book;
    
    cout << "What type of book did you borrow? between \n1.regular \n2.children \n3.reference\n";
    getline(cin, book);
    
    cout << "For how many days have you not returned the book?\n";
    cin >> daysLate;
	    
    if(daysLate >= 1 && daysLate <= 5){
        if(book == "regular"){
            cout << "The fine is sh500\n";
        }
        else if(book == "children"){
            cout << "The fine is sh400\n";
        }
        else if(book == "reference"){
            cout << "The fine is sh600\n";
        }
        else {
            cout << "Invalid option.\n";
        }
    }
    else if(daysLate >= 6 && daysLate <= 10){
        if(book == "regular"){
            cout << "The fine is sh1000\n";
        }
        else if(book == "children"){
            cout << "The fine is sh900\n";
        }
        else if(book == "reference"){
            cout << "The fine is sh1100\n";
        }
        else {
            cout << "Invalid option.\n";
        }
    }
    else if(daysLate > 10){
	     if(book == "regular"){
            cout << "The fine is sh5000\n";
        }
        else if(book == "children"){
            cout << "The fine is sh4900\n";
        }
        else if(book == "reference"){
            cout << "The fine is sh5100\n";
        }
        else {
            cout << "Invalid option.\n";
        }
    }
    else {
        cout << "Invalid number of days.\n";
    }

    return 0;
}
