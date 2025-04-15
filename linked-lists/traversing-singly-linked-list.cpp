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
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

int main()
{
    Node *HEAD = nullptr;

    HEAD = new Node(10);

    Node *current = new Node(20);
    HEAD->next = current;

    current = new Node(30);
    HEAD->next->next = current;

    Node *temp = nullptr;
    temp = HEAD;

    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}