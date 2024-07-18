#include <iostream>
using namespace std;

int main() {
    double accountBalance = 1000.00;  // Initial account balance
    double dailyLimit = 500.00;       // Daily withdrawal limit
    double amount;                    // Amount to withdraw

    cout << "Welcome to the ATM:" << endl;
    cout << "Your current balance is: sh" << accountBalance << endl;
    cout << "Your daily withdrawal limit is: sh" << dailyLimit << endl;
    cout << "Enter the amount you wish to withdraw: sh";
    cin >> amount;

    
    if (amount <= 0) {
        cout << "Invalid amount entered. Please enter a positive amount." << endl;
    } else if (amount > dailyLimit) {
        cout << "Error: The amount exceeds your daily withdrawal limit." << endl;
    } else if (amount > accountBalance) {
        cout << "Error: Insufficient funds in your account." << endl;
    } else {
        
        accountBalance -= amount;
        cout << "Withdrawal successful! Your new balance is: sh" << accountBalance << endl;
    }

    return 0;
}
