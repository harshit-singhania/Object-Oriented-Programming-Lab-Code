// Create a class student which stores name, roll number and age of a student. Derive a class
// test from student class, which stores marks in 5 subjects. Input and display the details of
// a student.

#include <iostream>
using namespace std;

class Student
{ 
    public: 
    string name;
    int roll;
    int age; 

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter age: ";
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Age: " << age << endl;
    }

};

class Test : public Student
{
    public:
    int marks[5];

    void getmarks()
    {
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void displaymarks()
    {
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Test t;
    t.getdata();
    t.getmarks();
    t.display();
    t.displaymarks();
    return 0;
}
