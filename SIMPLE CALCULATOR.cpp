#include <iostream>
using namespace std;

int main() {

    // Declare variables
    double num1, num2, result;
    char op;

    // Prompt user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    // Use switch statement
    switch (op) {

        case '+':
            result = num1 + num2;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result = " << result << endl;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            }
            else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Invalid operator entered!" << endl;
    }

    return 0;
}