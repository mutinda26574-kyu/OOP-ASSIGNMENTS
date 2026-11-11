#include <iostream>
#include <string>

using namespace std;

// Creating a class named Book
class Book
{
    private:
        string title;
        string author;
        int copies;

    public:

        // Function to input book details
        void inputDetails()
        {
            cout << "Enter Book Title: ";
            getline(cin, title);

            cout << "Enter Author Name: ";
            getline(cin, author);

            cout << "Enter Number of Copies: ";
            cin >> copies;
        }

        // Function to borrow a book
        void borrowBook()
        {
            if(copies > 0)
            {
                copies--;

                cout << "\nBook borrowed successfully!" << endl;
            }
            else
            {
                cout << "\nSorry, no copies available!" << endl;
            }
        }

        // Function to display book details
        void displayDetails()
        {
            cout << "\n===== BOOK DETAILS =====" << endl;

            cout << "Book Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Available Copies: " << copies << endl;
        }
};

// Main function
int main()
{
    // Creating an object of Book
    Book book1;

    // Input book details
    book1.inputDetails();

    // Borrow a book
    book1.borrowBook();

    // Display updated details
    book1.displayDetails();

    return 0;
}