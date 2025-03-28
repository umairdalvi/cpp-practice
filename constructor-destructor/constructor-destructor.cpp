#include <iostream>
using namespace std;

class Student
{
private:
    int grid;
    string name;
    float marks;

public:
    // void setData(int grid, string name, float marks)
    // {
    //     this->grid = grid;
    //     this->name = name;
    //     this->marks = marks;
    // }

    // Default Constructor
    Student(){}
    
    // Parameterized Constructor
    Student(int grid, string name, float marks){
        this->grid=grid;
        this->name=name;
        this->marks=marks;
    }

    // Destructor
    ~Student(){
        cout<<"RIP";
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
    // Student s1;

    Student s1(1234, "Jonh Doe", 90.5);
    s1.getData();

    return 0;
}