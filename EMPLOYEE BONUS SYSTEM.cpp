#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    string name;
    double basicSalary, bonus, totalSalary;

    // Use for loop to process 5 employees
    for (int i = 1; i <= 5; i++) {

        cout << "\nEnter details for Employee " << i << endl;

        // Input employee details
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        // Calculate bonus
        bonus = 0.05 * basicSalary;

        // Calculate total salary
        totalSalary = basicSalary + bonus;

        // Display employee report
        cout << "\n========== EMPLOYEE REPORT ==========" << endl;

        cout << fixed << setprecision(2);

        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: Ksh " << basicSalary << endl;
        cout << "Bonus (5%): Ksh " << bonus << endl;
        cout << "Total Salary: Ksh " << totalSalary << endl;

        cout << "=====================================" << endl;
    }

    return 0;
}