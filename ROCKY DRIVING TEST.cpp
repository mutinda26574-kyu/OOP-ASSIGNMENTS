//NAME:BONFACE MUTINDA
//COURSE:COMPUTER SCIENCE
//UNIT:OOP 1
//SCHOOL:SPAS
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    // Prompt the user to enter details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate the average score
    averageScore = (theoryMarks + practicalMarks) / 2;

    // Display the driving test results
    cout << "\n====================================\n";
    cout << "      ROCKY DRIVING SCHOOL\n";
    cout << "       DRIVING TEST RESULTS\n";
    cout << "====================================\n";

    cout << fixed << setprecision(2);
    cout << "Student Name:    " << studentName << endl;
    cout << "Theory Marks:    " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score:   " << averageScore << endl;

    // Determine whether the student passed or failed
    if (averageScore >= 50) {
        cout << "Test Result:     PASSED" << endl;
    } else {
        cout << "Test Result:     FAILED" << endl;
    }

    cout << "====================================\n";

    return 0;
}