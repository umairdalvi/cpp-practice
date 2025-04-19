#include <iostream>
using namespace std;

class Node
{
    // private:
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    // void setNext(Node *address)
    // {
    //     this->next = address;
    // }

    // Node *getNext()
    // {
    //     return this->next;
    // }

    // int getData()
    // {
    //     return this->data;
    // }
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

        newNode->next = HEAD;
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
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "\n----------------------------------------\n";
            cout << "Successfully inserted at the end.";
            cout << "\n----------------------------------------\n\n";

            counter++;
        }
    }

    void viewData()
    {
        if (counter == 0 || HEAD == nullptr)
        {
            cout << "\n----------------------------------------\n";
            cout << "List is empty.";
            cout << "\n----------------------------------------\n\n";
            return;
        }

        Node *temp;
        temp = HEAD;
        cout << "\n----------------------------------------\n";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
        cout << "\n----------------------------------------\n\n";
    }

    void addInBetween()
    {
        int data, posn;
        cout << "Enter data to insert: ";
        cin >> data;
        cout << "Enter position to insert data at: ";
        cin >> posn;

        Node *newNode = new Node(data);

        if (posn == 0 || HEAD == nullptr)
        {
            HEAD = newNode;
            cout << "\n\n----------------------------------------\n";
            cout << "The list is empty. \nInserted item will be the first item.";
            cout << "\n----------------------------------------\n\n";

            counter++;
            return;
        }
        if (posn >= counter)
        {
            cout << "\n----------------------------------------\n";
            cout << "Invalid Position.";
            cout << "\n----------------------------------------\n\n";
            return;
        }

        Node *temp;
        temp = HEAD;

        for (int i = 0; i < (posn - 1); i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        cout << "\n----------------------------------------\n";
        cout << "Successfully added at position.";
        cout << "\n----------------------------------------\n\n";

        counter++;
    }

    void updateData()
    {
        if (counter == 0 || HEAD == nullptr)
        {
            cout << "\n----------------------------------------\n";
            cout << "List is empty.";
            cout << "\n----------------------------------------\n\n";
            return;
        }

        int data, posn;

        cout << "Enter position to insert data at: ";
        cin >> posn;
        cout << "Enter new data to insert: ";
        cin >> data;

        if (posn >= counter)
        {
            cout << "\n----------------------------------------\n";
            cout << "Invalid Position.";
            cout << "\n----------------------------------------\n\n";
            return;
        }

        Node *temp;
        temp = HEAD;

        for (int i = 0; i < posn; i++)
        {
            temp = temp->next;
        }

        temp->data = data;

        cout << "\n----------------------------------------\n";
        cout << "Data Updated Successfully.";
        cout << "\n----------------------------------------\n\n";
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
            list.addAtEnd();

            break;
        }
        case 3:
        {
            list.addInBetween();

            break;
        }
        case 4:
        {
            list.viewData();

            break;
        }
        case 5:
        {
            list.updateData();

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