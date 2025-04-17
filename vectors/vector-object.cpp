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

    void displayInfo()
    {
        cout << "\n--------------------------------------\n";
        cout << "ID     :  " << this->studentId << endl;
        cout << "Name   :  " << this->studentName << endl;
        cout << "Age    :  " << this->studentAge << endl;
        cout << "Course :  " << this->studentCourse << endl;
        cout << "--------------------------------------\n";
    }

    int getId()
    {
        return this->studentId;
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

    void displayAllStudents()
    {
        if (students.empty())
        {
            cout << "\n--------------------------------------\n";
            cout << "No students to display.";
            cout << "\n--------------------------------------\n\n";
        }
        else
        {
            for (int i = 0; i < students.size(); i++)
            {
                students[i].displayInfo();
            }
        }
    }

    void removeStudent()
    {
        int id;
        cout << "Enter Student ID: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getId() == id)
            {
                students[i].displayInfo();

                string confirm;
                cout << "Are you sure you want to remove this student (y/n): ";
                cin >> confirm;
                if (confirm == "y" || confirm == "Y")
                {
                    cout << "\n--------------------------------------\n";
                    students.erase(students.begin() + i);
                    cout << "Student Removed Successfully.";
                    cout << "\n--------------------------------------\n\n";
                    return;
                }
                else
                {
                    cout << "\n--------------------------------------\n";
                    cout << "Exiting.";
                    cout << "\n--------------------------------------\n\n";
                    return;
                }
            }
        }
        cout << "\n--------------------------------------\n";
        cout << "Student with ID " << id << " not found";
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
            manager.removeStudent();
            break;
        }
        case 3:
        {
            manager.displayAllStudents();
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