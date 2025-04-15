#include <iostream>
using namespace std;

class Student
{
public:
    int grid;
    string name;
    int age;
    string course;
};

int main()
{

    Student john;
    john.grid = 1234;
    john.name = "John Doe";
    john.age = 25;
    john.course = "FSD";

    cout << john.grid << endl;
    cout << john.name << endl;
    cout << john.age << endl;
    cout << john.course << endl;

    john.age = 23;
    cout << john.age << endl;

    return 0;
}