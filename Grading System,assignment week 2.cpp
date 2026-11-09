#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    int marks;
    char grade;

    // Prompt user to enter details
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter examination marks: ";
    cin >> marks;

    // Check marks and assign grades using if-else ladder
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    }
    else if (marks >= 0 && marks < 40) {
        grade = 'E';
    }
    else {
        cout << "Invalid marks entered!" << endl;
        return 0;
    }

    // Display student results
    cout << "\n----- STUDENT RESULTS -----" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Examination Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}