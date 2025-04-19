#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    void setNext(Node *address = nullptr)
    {
        this->next = address;
    }

    Node *getNext()
    {
        return this->next;
    }
};

class LinkedList
{
private:
    Node *HEAD;
    int counter;

public:
    LinkedList()
    {
        HEAD = nullptr;
    }

    void addAtStart()
    {
        int data;
        cout << "Enter data to insert: ";
        cin >> data;

        Node *newNode = new Node(data);

        newNode->setNext(HEAD);
        HEAD = newNode;
        cout << "\n----------------------------------------\n";
        cout << "Successfully inserted at the beginning.";
        cout << "\n----------------------------------------\n\n";

        counter++;
    }

    void addAtEnd()
    {
        int data;
        cout << "Enter data to insert: ";
        cin >> data;

        Node *newNode = new Node(data);

        if (counter == 0 || HEAD == nullptr)
        {
            HEAD = newNode;
            cout << "\n\n----------------------------------------\n";
            cout << "The list is empty. \nInserted item will be the first item.";
            cout << "\n----------------------------------------\n\n";

            counter++;
        }
        else
        {
            Node *temp;
            temp = HEAD;
            while (temp->getNext() != nullptr)
            {
                temp = temp->getNext();
            }
        }
    }
};

int main()
{
    int choice;
    LinkedList list;

    do
    {
        cout << "1. Add data in the beginning." << endl;
        cout << "2. Add data in the end." << endl;
        cout << "3. Add data at any position." << endl;
        cout << "4. View data." << endl;
        cout << "5. Update Data." << endl;
        cout << "0. Exit." << endl;
        cout << "Enter your choice (1-5): ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            list.addAtStart();

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
        case 6:
        {

            break;
        }
        case 7:
        {

            break;
        }
        case 8:
        {

            break;
        }
        case 0:
        {

            break;
        }
        }
    } while (choice != 0);

    switch (choice)
    {
    case 1:
    {
        list.addAtStart();

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
    case 6:
    {

        break;
    }
    case 7:
    {

        break;
    }
    case 8:
    {

        break;
    }
    case 0:
    {

        break;
    }
    }

    return 0;
}