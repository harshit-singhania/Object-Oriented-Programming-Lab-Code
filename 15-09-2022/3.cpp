// Extend the program ii. to derive a class from result from classs ‘test’ which includes
// member function to calculate total marks and percentage of a student. Input the data fora
// student and display its total marks and percentage.

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

class Result : public Test
{
    public:
    int total;
    float percentage;

    void calculate()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        percentage = total*5;
    }

    void displayresult()
    {
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    Result r;
    r.getdata();
    r.getmarks();
    r.calculate();
    r.display();
    r.displaymarks();
    r.displayresult();
    return 0;
}