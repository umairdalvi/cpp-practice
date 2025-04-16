#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = nullptr;
    };

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    };
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void addAtStart(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        cout << "\n----------------------------------------\n";
        cout << "Successfully inserted at the beginning.";
        cout << "\n----------------------------------------\n\n";
    }

    void addAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            cout << "\n\n----------------------------------------\n";
            cout << "The list is empty. \nInserted item will be the first item.";
            cout << "\n----------------------------------------\n\n";
        }
        else
        {
            Node *temp;
            temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "\n----------------------------------------\n";
            cout << "Successfully inserted at the end.";
            cout << "\n----------------------------------------\n\n";
        }
    }

    void viewData()
    {
        if (head == nullptr)
        {
            cout << "\n----------------------------------------\n";
            cout << "The list is empty.";
            cout << "\n----------------------------------------\n\n";
        }
        else
        {
            Node *temp;
            temp = head;
            cout << "\n----------------------------------------\n";
            while (temp != nullptr)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL";
            cout << "\n----------------------------------------\n\n";
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
        cout << "5. Exit." << endl;
        cout << "Enter your choice (1-5): ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "enter value to insert: ";
            cin >> data;

            list.addAtStart(data);

            break;
        }
        case 2:
        {
            int data;
            cout << "enter value to insert: ";
            cin >> data;

            list.addAtEnd(data);

            break;
        }
        case 3:
        {
            cout << "\n----------------------------------------\n";
            cout << "Coming Soon......";
            cout << "\n----------------------------------------\n\n";

            break;
        }
        case 4:
        {
            list.viewData();

            break;
        }
        case 5:
        {
            cout << "Byeee...." << endl;

            break;
        }
        }

    } while (choice != 5);

    return 0;
}