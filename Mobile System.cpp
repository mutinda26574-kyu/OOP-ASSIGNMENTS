//NAME:BONFACE MUTINDA
//REG NO.:CT101/G/26574/25
//COURSE:COMPUTER SCIENCE
//UNIT:OOP 1
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string customerName, phoneModel;
    int quantityBought;
    double pricePerPhone, totalSalesAmount;

    // Prompt the user to enter details
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantityBought;

    cout << "Enter price per phone: Ksh ";
    cin >> pricePerPhone;

    // Calculate total sales amount
    totalSalesAmount = quantityBought * pricePerPhone;

    // Display the receipt
    cout << "\n====================================\n";
    cout << "       MOBILE PHONE SHOP\n";
    cout << "          SALES RECEIPT\n";
    cout << "====================================\n";

    cout << fixed << setprecision(2);
    cout << "Customer Name:     " << customerName << endl;
    cout << "Phone Model:       " << phoneModel << endl;
    cout << "Quantity Bought:   " << quantityBought << endl;
    cout << "Price Per Phone:   Ksh " << pricePerPhone << endl;
    cout << "------------------------------------\n";
    cout << "Total Sales Amount: Ksh "
         << totalSalesAmount << endl;
    cout << "====================================\n";
    cout << "       Thank you for shopping!\n";
    cout << "====================================\n";

    return 0;
}
