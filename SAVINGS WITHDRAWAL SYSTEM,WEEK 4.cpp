#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double balance, withdrawalAmount;

    // Enter initial account balance
    cout << "Enter Account Balance: Ksh ";
    cin >> balance;

    // Check whether balance is valid
    if (balance <= 0) {
        cout << "Insufficient account balance!" << endl;
        return 0;
    }

    // Use while loop for repeated withdrawals
    while (balance > 0) {

        cout << "\nEnter Withdrawal Amount: Ksh ";
        cin >> withdrawalAmount;

        // Check withdrawal amount
        if (withdrawalAmount > balance) {
            cout << "Withdrawal failed! Insufficient funds." << endl;
            break;
        }

        if (withdrawalAmount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            continue;
        }

        // Deduct withdrawal from balance
        balance = balance - withdrawalAmount;

        // Display remaining balance
        cout << fixed << setprecision(2);
        cout << "Withdrawal Successful!" << endl;
        cout << "Remaining Balance: Ksh "
             << balance << endl;

        // Stop if balance becomes zero
        if (balance == 0) {
            cout << "Your account balance is zero." << endl;
            break;
        }
    }

    cout << "\nThank you for using our withdrawal system!" << endl;

    return 0;
}