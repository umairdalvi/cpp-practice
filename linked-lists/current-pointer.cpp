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

int main()
{
    Node *head = nullptr;
    head = new Node(10);

    Node *current = new Node(20);
    head->next = current;

    current = new Node(30);
    head->next->next = current;

    cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl;

    return 0;
}