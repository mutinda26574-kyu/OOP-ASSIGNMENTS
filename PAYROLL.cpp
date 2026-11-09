#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Declare global variables
string name;
double basicSalary, overtimeHours, ratePerHour;
double overtimePay, netSalary;

// Function to get employee details
void getEmployeeDetails() {

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;

    cout << "Enter Overtime Rate Per Hour: ";
    cin >> ratePerHour;
}

// Function to calculate overtime pay
double calculateOvertimePay() {

    overtimePay = overtimeHours * ratePerHour;

    return overtimePay;
}

// Function to calculate net salary
double calculateNetSalary() {

    netSalary = basicSalary + overtimePay;

    return netSalary;
}

// Function to display payslip
void displayPayslip() {

    cout << "\n==================================" << endl;
    cout << "          EMPLOYEE PAYSLIP        " << endl;
    cout << "==================================" << endl;

    cout << fixed << setprecision(2);

    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: Ksh " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Rate Per Hour: Ksh " << ratePerHour << endl;
    cout << "Overtime Pay: Ksh " << overtimePay << endl;

    cout << "----------------------------------" << endl;
    cout << "Net Salary: Ksh " << netSalary << endl;
    cout << "==================================" << endl;
}

// Main function
int main() {

    // Call functions in logical sequence
    getEmployeeDetails();

    calculateOvertimePay();

    calculateNetSalary();

    displayPayslip();

    return 0;
}