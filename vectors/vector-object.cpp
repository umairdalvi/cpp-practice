#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    int studentId, studentAge;
    string studentName, studentCourse;

public:
    Student()
    {
        studentId = 0;
        studentAge = 0;
        studentName = "";
        studentCourse = "";
    }

    Student(string studentName, int studentId, int studentAge, string studentCourse)
    {
        this->studentName = studentName;
        this->studentAge = studentAge;
        this->studentId = studentId;
        this->studentCourse = studentCourse;
    }
};

class StudentManager
{
private:
    vector<Student> students;

public:
    void addStudent()
    {
        int studentId, studentAge;
        string studentName, studentCourse;

        cin.ignore();

        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter student age: ";
        cin >> studentAge;

        cout << "Enter student id: ";
        cin >> studentId;

        cin.ignore();

        cout << "Enter student course: ";
        getline(cin, studentCourse);

        Student std1(studentName, studentId, studentAge, studentCourse);
        students.push_back(std1);

        cout << "\n--------------------------------------\n";
        cout << "Student added successfully";
        cout << "\n--------------------------------------\n\n";
    }
};

int main()
{
    StudentManager manager;
    int choice;

    do
    {
        cout << "1. Add student." << endl;
        cout << "2. Remove student." << endl;
        cout << "3. View all students." << endl;
        cout << "4. Update student details." << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            manager.addStudent();
            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

            break;
        }
        case 5:
        {
            cout << "\n--------------------------------------\n";
            cout << "Thank You.";
            cout << "\n--------------------------------------\n\n";

            break;
        }
        }

    } while (choice != 5);

    return 0;
}