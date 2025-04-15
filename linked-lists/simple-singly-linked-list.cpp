#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *HEAD = nullptr;

    HEAD = new Node();

    HEAD->data = 20;
    HEAD->next = nullptr;

    Node *n2 = new Node();

    n2->data = 30;
    n2->next = nullptr;

    HEAD->next = n2;

    Node *n3 = new Node();

    n3->data = 40;
    n3->next = nullptr;

    n2->next = n3;

    cout << HEAD->data << endl;
    cout << HEAD->next->data << endl;
    cout << HEAD->next->next->data;

    return 0;
}