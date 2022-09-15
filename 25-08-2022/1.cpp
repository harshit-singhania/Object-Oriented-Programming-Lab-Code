#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    void get_details(void);
    void print_details(void);
};

void Student::get_details(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;
}

void Student::print_details(void)
{
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    int num;
    cout << "Enter number of students: ";
    cin >> num;
    Student std[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter details of student " << i + 1 << endl;
        std[i].get_details();
    }
    cout<<endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Details of student " << i + 1 << endl;
        std[i].print_details();
    }
}