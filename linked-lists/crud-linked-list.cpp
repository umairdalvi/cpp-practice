#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() {};

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList : public Node
{
public:
    Node *HEAD;
    int count;

    LinkedList()
    {
        this->HEAD = nullptr;
        this->count = 0;
    }

    void addAtStart(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->HEAD;
        this->HEAD = newNode;

        this->count++;
    }

    void addAtEnd(int data)
    {
        Node *newNode = new Node(data);

        if (count == 0)
        {
            this->HEAD = newNode;
        }
        else
        {
            Node *temp = this->HEAD;

            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void viewData()
    {
        Node *temp = this->HEAD;

        cout << "\n-------------------------------\n";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
        cout << "-------------------------------\n\n";
    }
};

int main()
{
    int choice;
    LinkedList list;

    do
    {
        cout << "press 1 to add data in the beginning." << endl;
        cout << "press 2 to add data in the end." << endl;
        cout << "press 3 to add data at any position." << endl;
        cout << "press 4 to view data." << endl;
        cout << "press 5 to exit." << endl;
        cout << "Enter your choice: ";

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

            break;
        }
        case 4:
        {
            list.viewData();

            break;
        }
        case 5:
        {
            cout << "bye...";
            break;
        }
        }
    } while (choice != 5);

    return 0;
}