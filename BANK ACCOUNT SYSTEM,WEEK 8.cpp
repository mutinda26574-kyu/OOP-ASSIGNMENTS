#include <iostream>
#include <string>

using namespace std;

// Creating a class named BankAccount
class BankAccount
{
    private:
        string accountHolder;
        int accountNumber;
        double accountBalance;

    public:

        // Constructor
        BankAccount(string name, int number, double balance)
        {
            accountHolder = name;
            accountNumber = number;
            accountBalance = balance;

            cout << "Account successfully created" << endl;
        }

        // Member function to display account details
        void displayAccount()
        {
            cout << "\n===== BANK ACCOUNT DETAILS =====" << endl;

            cout << "Account Holder: " << accountHolder << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Balance: Ksh " << accountBalance << endl;
        }

        // Destructor
        ~BankAccount()
        {
            cout << "\nAccount closed successfully" << endl;
        }
};

// Main function
int main()
{
    // Creating an object and initializing its details
    BankAccount account1("Bonface", 12345, 50000);

    // Display account details
    account1.displayAccount();

    return 0;
} 