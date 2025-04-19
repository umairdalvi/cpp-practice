#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    Node *HEAD;
    int counter = 0;

public:
    LinkedList()
    {
        HEAD = nullptr;
    }

    bool isEmpty()
    {
        if (counter == 0 || HEAD == nullptr)
            return true;
        else
            return false;
    }

    bool checkEmpty()
    {
        if (isEmpty())
        {
            cout << "\n----------------------------------------\n";
            cout << "List is empty.";
            cout << "\n----------------------------------------\n\n";
            return true;
        }
        return false;
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

        if (isEmpty())
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
        if (checkEmpty())
            return;

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

    void addAtPosition()
    {
        int posn;
        cout << "Enter position to insert data at: ";
        cin >> posn;

        if (posn > counter || posn < 0)
        {
            cout << "\n----------------------------------------\n";
            cout << "Invalid Position.";
            cout << "\n----------------------------------------\n\n";
            return;
        }

        if (posn == 0)
        {
            addAtStart();
            return;
        }

        if (posn == counter)
        {
            addAtEnd();
            return;
        }

        int data;
        cout << "Enter data to insert: ";
        cin >> data;
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            HEAD = newNode;
            cout << "\n\n----------------------------------------\n";
            cout << "The list is empty. \nInserted item will be the first item.";
            cout << "\n----------------------------------------\n\n";

            counter++;
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
        if (checkEmpty())
            return;

        int data, posn;

        cout << "Enter position to update data at: ";
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

    void deleteAtStart()
    {
        if (checkEmpty())
            return;

        if (HEAD->next == nullptr)
        {
            delete HEAD;
            HEAD = nullptr;

            cout << "\n----------------------------------------\n";
            cout << "First Node Deleted Successfully.";
            cout << "\n----------------------------------------\n\n";

            counter--;
            return;
        }

        Node *temp;
        temp = HEAD;

        HEAD = HEAD->next;

        delete temp;
        temp = nullptr;

        cout << "\n----------------------------------------\n";
        cout << "First Node Deleted Successfully.";
        cout << "\n----------------------------------------\n\n";

        counter--;
    }

    void deleteAtEnd()
    {
        if (checkEmpty())
            return;

        if (HEAD->next == nullptr)
        {
            delete HEAD;
            HEAD = nullptr;

            cout << "\n----------------------------------------\n";
            cout << "Last Node Deleted Successfully.";
            cout << "\n----------------------------------------\n\n";

            counter--;

            return;
        }

        Node *temp;
        temp = HEAD;

        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;

        cout << "\n----------------------------------------\n";
        cout << "Last Node Deleted Successfully.";
        cout << "\n----------------------------------------\n\n";

        counter--;
    }

    void deleteAtPosition()
    {
        if (checkEmpty())
            return;

        int posn;
        cout << "Enter position to delete data from: ";
        cin >> posn;

        if (posn > counter || posn < 0)
        {
            cout << "\n----------------------------------------\n";
            cout << "Invalid Position.";
            cout << "\n----------------------------------------\n\n";
            return;
        }

        if (posn == 0)
        {
            deleteAtStart();
            return;
        }

        if (posn == counter)
        {
            deleteAtEnd();
            return;
        }

        Node *temp;
        temp = HEAD;

        for (int i = 0; i < (posn - 1); i++)
        {
            temp = temp->next;
        }

        Node *deleteNode = temp->next;
        temp->next = deleteNode->next;

        delete deleteNode;
        deleteNode = nullptr;

        counter--;

        cout << "\n----------------------------------------\n";
        cout << "Node at position " << posn << " deleted successfully.";
        cout << "\n----------------------------------------\n\n";

        return;
    }
};

int main()
{
    int choice;
    LinkedList list;

    do
    {
        cout << "0. Exit." << endl;
        cout << "1. Add data in the beginning." << endl;
        cout << "2. Add data in the end." << endl;
        cout << "3. Add data at given position." << endl;
        cout << "4. View data." << endl;
        cout << "5. Update Data." << endl;
        cout << "6. Delete Data at the beginning." << endl;
        cout << "7. Delete Data at the end." << endl;
        cout << "8. Delete Data at given position ." << endl;
        cout << "Enter your choice (0-8): ";

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
            list.addAtPosition();

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
            list.deleteAtStart();

            break;
        }
        case 7:
        {
            list.deleteAtEnd();

            break;
        }
        case 8:
        {
            list.deleteAtPosition();

            break;
        }
        case 0:
        {
            cout << "\n----------------------------------------\n";
            cout << "Thank you.";
            cout << "\n----------------------------------------\n\n";

            break;
        }
        }
    } while (choice != 0);

    return 0;
}