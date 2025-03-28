#include <iostream>
using namespace std;

class Student
{
private:
    int grid;
    string name;
    float marks;

public:
    void setData(int grid, string name, float marks)
    {
        this->grid = grid;
        this->name = name;
        this->marks = marks;
    }

    void getData()
    {
        cout << this->grid << endl;
        cout << this->name << endl;
        cout << this->marks << endl;
    }
};

int main()
{
    Student s1;

    s1.setData(1234, "John Doe", 99.99);
    s1.getData();

    return 0;
}