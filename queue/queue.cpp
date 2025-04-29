#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, size, count, *arr;

public:
    Queue(int size)
    {
        this->size = size;
        this->front = -1;
        this->rear = -1;
        this->count = 0;
        this->arr = new int[size];
    }

    void enqueue();
    void dequeue();
    void viewAll();
    void getFront();
    void getRear();
    void isFull();
    void isEmpty();
    void getCurrentSize();
};

void Queue::enqueue()
{
    if (this->size == this->count)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Full.";
        cout << "\n----------------------------------\n";
        return;
    }

    int data;
    cout << "Enter data to enqueue: ";
    cin >> data;

    if (this->count == 0)
    {
        this->front++;
        this->rear++;
        arr[rear] = data;
        this->count++;

        cout << "\n----------------------------------\n";
        cout << "Enqueued Successfully.";
        cout << "\n----------------------------------\n";
    }
    else
    {
        this->rear++;
        arr[rear] = data;
        this->count++;

        cout << "\n----------------------------------\n";
        cout << "Enqueued Successfully.";
        cout << "\n----------------------------------\n";
    }
}

void Queue::dequeue()
{
    if (this->count == 0)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    this->arr[front] = 0;
    this->front++;
    this->count--;

    if (this->count == 0)
    {
        this->front = -1;
        this->rear = -1;
    }

    cout << "\n----------------------------------\n";
    cout << "Dequeued Successfully.";
    cout << "\n----------------------------------\n";
}

void Queue::viewAll()
{
    if (this->count == 0)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    cout << "\n----------------------------------\n";
    for (int i = this->front; i <= this->rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n----------------------------------\n";
}

void Queue::getFront()
{
    if (this->count == 0)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Empty.";
        cout << "\n----------------------------------\n";
        return;
    }
    cout << "\n----------------------------------\n";
    cout << "Front Element: " << arr[front];
    cout << "\n----------------------------------\n";
}

void Queue::getRear()
{
    if (this->count == 0)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    cout << "\n----------------------------------\n";
    cout << "Rear Element: " << arr[rear];
    cout << "\n----------------------------------\n";
}

void Queue::isFull()
{
    if (this->count == size)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is full.";
        cout << "\n----------------------------------\n";
    }
    else
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is not Full";
        cout << "\n----------------------------------\n";
    }
}

void Queue::isEmpty()
{
    if (this->count == 0)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Empty.";
        cout << "\n----------------------------------\n";
    }
    else
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is not Empty";
        cout << "\n----------------------------------\n";
    }
}

void Queue::getCurrentSize()
{
    if (this->count == 0)
    {
        cout << "\n----------------------------------\n";
        cout << "Queue is Empty.";
        cout << "\n----------------------------------\n";
        return;
    }

    cout << "\n----------------------------------\n";
    cout << "Current Size: " << this->count;
    cout << "\n----------------------------------\n";
}

int main()
{
    Queue q(5);
    int choice;

    do
    {
        cout << endl;
        cout << "0. Exit." << endl;
        cout << "1. Enqueue Data." << endl;
        cout << "2. Dequeue Data." << endl;
        cout << "3. Display All Data." << endl;
        cout << "4. View Front Data ." << endl;
        cout << "5. View Rear Data." << endl;
        cout << "6. Check if Queue is Full." << endl;
        cout << "7. Check is Queue is Empty." << endl;
        cout << "8. View Current Queue Size." << endl;
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
            q.enqueue();

            break;
        }
        case 2:
        {
            q.dequeue();

            break;
        }
        case 3:
        {
            q.viewAll();

            break;
        }
        case 4:
        {
            q.getFront();

            break;
        }
        case 5:
        {
            q.getRear();

            break;
        }
        case 6:
        {
            q.isFull();

            break;
        }
        case 7:
        {
            q.isEmpty();

            break;
        }
        case 8:
        {
            q.getCurrentSize();

            break;
        }
        }

    } while (choice != 0);

    return 0;
}