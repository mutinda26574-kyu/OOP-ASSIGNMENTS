#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declare variables
    string name;
    int age, score;

    // Prompt user to enter student details
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter examination score: ";
    cin >> score;

    // Nested if statements for admission
    if (age >= 18) {

        if (score >= 50) {
            cout << "\nAdmission Decision: Admitted" << endl;
        }
        else {
            cout << "\nAdmission Decision: Not Admitted: Low Score" << endl;
        }

    }
    else {
        cout << "\nAdmission Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}