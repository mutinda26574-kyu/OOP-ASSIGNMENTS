#include <iostream>
#include <string>
using namespace std;

int main() {

    // Store predefined username and password
    string correctUsername = "admin";
    string correctPassword = "12345";

    // Declare variables
    string username, password;

    // Use do-while loop
    do {

        // Prompt user to enter login details
        cout << "\nEnter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        // Check login credentials
        if (username == correctUsername &&
            password == correctPassword) {

            cout << "\nAccess Granted!" << endl;

        }
        else {

            cout << "\nIncorrect credentials, try again."
                 << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    cout << "\nWelcome to the system!" << endl;

    return 0;
}