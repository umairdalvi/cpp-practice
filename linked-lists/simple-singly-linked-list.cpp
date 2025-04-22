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

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    head = node1;
    head->next = node2;
    node2->next = node3;

    cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl;

    return 0;
}