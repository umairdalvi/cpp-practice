#include <iostream>
#include <vector>
using namespace std;

class Book
{
protected:
    int bookId;
    string name;
    string author;
    bool isIssued;

public:
    Book()
    {
        this->bookId = 0;
        this->name = "";
        this->author = "";
        this->isIssued = false;
    }

    Book(int bookId, string name, string author)
    {
        this->bookId = bookId;
        this->name = name;
        this->author = author;
        this->isIssued = false;
    }
};

class IssuedBook : public Book
{
private:
    string issuedTo;
    string issueDate;

public:
};

class Library
{
private:
    vector<Book> bookShelf;
    int bookCounter = 0;

public:
    void addBook()
    {
        int bookId;
        string name, author;

        cout << "Enter Book ID: ";
        cin >> bookId;

        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, name);

        cout << "Enter Author Name: ";
        getline(cin, author);

        Book newBook(bookId, name, author);
        bookShelf.push_back(newBook);

        cout << "\n-----------------------------------\n";
        cout << "Book added succesfully";
        cout << "\n-----------------------------------\n\n";

        bookCounter++;
    }
};

int main()
{
    Library library;

    int choice;
    do
    {
        cout << "1. Add book." << endl;
        cout << "2. View all books." << endl;
        cout << "3. Issue book." << endl;
        cout << "4. Return book." << endl;
        cout << "5. Exit." << endl;
        cout << "Enter your choice(1-5): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            library.addBook();

            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

            break;
        }
        case 5:
        {

            break;
        }
        }
    } while (choice != 5);

    return 0;
}