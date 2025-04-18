#include <iostream>
#include <vector>
using namespace std;

class Book
{
protected:
    int bookId;
    string name;
    string author;
    string borrower;
    string date;
    bool isIssued;

public:
    Book()
    {
        this->bookId = 0;
        this->name = "";
        this->author = "";
        this->isIssued = false;
        this->borrower = "";
        this->date = "";
    }

    Book(int bookId, string name, string author)
    {
        this->bookId = bookId;
        this->name = name;
        this->author = author;
        this->isIssued = false;
        this->borrower = "";
        this->date = "";
    }

    bool getIssueStatus()
    {
        return this->isIssued;
    }

    int getBookId()
    {
        return this->bookId;
    }

    void updateIssueStatus(bool status, string borrower, string date)
    {
        this->isIssued = status;
        this->borrower = borrower;
        this->date = date;
    }

    void viewBookInfo()
    {
        cout << "\n--------------------------------------\n";
        cout << "Book ID         :  " << this->bookId << endl;
        cout << "Name            :  " << this->name << endl;
        cout << "Author          :  " << this->author << endl;
        cout << "Available       :  ";
        cout << (getIssueStatus() ? "No" : "Yes") << endl;
        if (getIssueStatus() == true)
        {
            cout << "Borrower name   :  " << this->borrower << endl;
            cout << "Issue date      :  " << this->date << endl;
        }
        cout << "--------------------------------------\n";
    }
};

// class IssuedBook : public Book
// {
// private:
//     string issuedTo;
//     string issueDate;

// public:
// };

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

    void viewAllBooks()
    {
        if (bookCounter == 0)
        {
            cout << "\n-----------------------------------\n";
            cout << "No books available.";
            cout << "\n-----------------------------------\n\n";
            return;
        }
        for (int i = 0; i < bookShelf.size(); i++)
        {
            bookShelf[i].viewBookInfo();
        }
    }

    void issueBook()
    {
        if (bookCounter == 0)
        {
            cout << "\n-----------------------------------\n";
            cout << "No books available";
            cout << "\n-----------------------------------\n\n";
            return;
        }

        int id;
        bool found;
        cout << "Enter Book ID: ";
        cin >> id;

        for (int i = 0; i < bookShelf.size(); i++)
        {
            if (bookShelf[i].getBookId() == id)
            {
                found = true;
                if (bookShelf[i].getIssueStatus() == true)
                {
                    cout << "\n-----------------------------------\n";
                    cout << "Book already issued";
                    cout << "\n-----------------------------------\n\n";
                    return;
                }

                string borrowerName, issueDate;
                cin.ignore();
                cout << "Enter borrower's name: ";
                getline(cin, borrowerName);
                cout << "Enter issue date: ";
                getline(cin, issueDate);

                bookShelf[i].updateIssueStatus(true, borrowerName, issueDate);

                cout << "\n-----------------------------------\n";
                cout << "Book issued successfully";
                cout << "\n-----------------------------------\n\n";
            }
        }

        if (!found)
        {
            cout << "\n-----------------------------------\n";
            cout << "Book not found";
            cout << "\n-----------------------------------\n\n";
        }
    }

    void returnBook()
    {
        int id;
        bool found;
        cout << "Enter Book ID: ";
        cin >> id;

        for (int i = 0; i < bookShelf.size(); i++)
        {
            if (bookShelf[i].getBookId() == id)
            {
                found = true;
                if (bookShelf[i].getIssueStatus() == false)
                {
                    cout << "\n-----------------------------------\n";
                    cout << "Book not issued";
                    cout << "\n-----------------------------------\n\n";
                    return;
                }

                string borrowerName = "";
                string issueDate = "";

                bookShelf[i].updateIssueStatus(false, borrowerName, issueDate);

                cout << "\n-----------------------------------\n";
                cout << "Book returned successfully";
                cout << "\n-----------------------------------\n\n";
            }
        }

        if (!found)
        {
            cout << "\n-----------------------------------\n";
            cout << "Book not found";
            cout << "\n-----------------------------------\n\n";
        }
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
            library.viewAllBooks();
            break;
        }
        case 3:
        {
            library.issueBook();
            break;
        }
        case 4:
        {
            library.returnBook();
            break;
        }
        case 5:
        {
            cout << "\n-----------------------------------\n";
            cout << "Thank You.";
            cout << "\n-----------------------------------\n\n";

            break;
        }
        }
    } while (choice != 5);

    return 0;
}