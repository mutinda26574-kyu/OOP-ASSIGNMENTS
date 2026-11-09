#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Declare global variables
string customerName;
double unitsConsumed, ratePerUnit;
double totalBill, discount, finalAmount;

// Function to get customer details
void getCustomerDetails() {

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Units Consumed: ";
    cin >> unitsConsumed;

    cout << "Enter Rate Per Unit: ";
    cin >> ratePerUnit;
}

// Function to calculate water bill
double calculateBill() {

    totalBill = unitsConsumed * ratePerUnit;

    return totalBill;
}

// Function to apply discount
double applyDiscount() {

    if (unitsConsumed > 100) {
        discount = totalBill * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = totalBill - discount;

    return finalAmount;
}

// Function to display water bill
void displayBill() {

    cout << fixed << setprecision(2);

    cout << "\n==================================" << endl;
    cout << "         WATER BILL RECEIPT       " << endl;
    cout << "==================================" << endl;

    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Rate Per Unit: Ksh " << ratePerUnit << endl;

    cout << "----------------------------------" << endl;

    cout << "Total Bill: Ksh " << totalBill << endl;
    cout << "Discount: Ksh " << discount << endl;
    cout << "----------------------------------" << endl;

    cout << "Final Amount Payable: Ksh "
         << finalAmount << endl;

    cout << "==================================" << endl;
}

// Main function
int main() {

    // Call functions in logical sequence
    getCustomerDetails();

    calculateBill();

    applyDiscount();

    displayBill();

    return 0;
}