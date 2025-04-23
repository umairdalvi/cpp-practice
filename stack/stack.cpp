#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int counter;
    int *arr;
    int maxSize;

public:
    Stack(int maxSize)
    {
        this->top = -1;
        this->counter = 0;
        this->arr = new int[maxSize];
        this->maxSize = maxSize;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push();
    void display();
    void pop();
    void size();
    void isFull();
    void isEmpty();
    void peek();
};

void Stack::push()
{
    if (this->top == this->maxSize - 1)
    {
        cout << "\n----------------------------------\n";
        cout << "Stack is full.";
        cout << "\n----------------------------------\n";
        return;
    }

    int data;
    cout << "Enter data to push: ";
    cin >> data;

    this->top++;
    arr[top] = data;
    this->counter++;

    cout << "\n----------------------------------\n";
    cout << "Data pushed successfully.";
    cout << "\n----------------------------------\n";
}

void Stack::display()
{
    if (counter == 0 || top == -1)
    {
        cout << "\n----------------------------------\n";
        cout << "Stack is empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    cout << "\n---\n";
    for (int i = this->top; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    cout << "---\n";
}

void Stack::pop()
{
    if (counter == 0 || top == -1)
    {
        cout << "\n----------------------------------\n";
        cout << "Stack is empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    arr[this->top] = 0;
    this->top--;
    this->counter--;

    cout << "\n----------------------------------\n";
    cout << "Data popped successfully.";
    cout << "\n----------------------------------\n";
}

void Stack::size()
{
    cout << "\n----------------------------------\n";
    cout << "Current Stack Size: " << this->counter;
    cout << "\n----------------------------------\n";
}

void Stack::isFull()
{
    cout << "\n----------------------------------\n";
    (this->counter == this->maxSize) ? cout << "Stack is Full." : cout << "Stack is not Full.";
    cout << "\n----------------------------------\n";
}

void Stack::isEmpty()
{
    cout << "\n----------------------------------\n";
    (this->counter == 0) ? cout << "Stack is Empty." : cout << "Stack is not Empty.";
    cout << "\n----------------------------------\n";
}

void Stack::peek()
{
    if (counter == 0 || top == -1)
    {
        cout << "\n----------------------------------\n";
        cout << "Stack is empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    cout << "\n----------------------------------\n";
    cout << "Top Element: " << arr[top];
    cout << "\n----------------------------------\n";
}

int main()
{
    int choice;
    Stack stack(5);

    do
    {
        cout << endl;
        cout << "0. Exit." << endl;
        cout << "1. Push Data." << endl;
        cout << "2. View Data." << endl;
        cout << "3. Pop Data." << endl;
        cout << "4. View Current Stack Size." << endl;
        cout << "5. Check if Stack is Full." << endl;
        cout << "6. Check if Stack is Empty." << endl;
        cout << "7. Peek." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
        {
            cout << "\n----------------------------------\n";
            cout << "Thank you.";
            cout << "\n----------------------------------\n";

            break;
        }
        case 1:
        {
            stack.push();
            break;
        }
        case 2:
        {
            stack.display();
            break;
        }
        case 3:
        {
            stack.pop();
            break;
        }
        case 4:
        {
            stack.size();
            break;
        }
        case 5:
        {
            stack.isFull();
            break;
        }
        case 6:
        {
            stack.isEmpty();
            break;
        }
        case 7:
        {
            stack.peek();
            break;
        }
        }

    } while (choice != 0);

    return 0;
}