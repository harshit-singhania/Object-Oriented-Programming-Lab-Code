// Extend the program tl. to inctude @ Class sports, Waicn sores Bie Marks in sports activity.
// Derive the result class from the classes ‘test’ and ‘sports’. Calculate the total marks and
// percentage of a student.

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

class Sports
{
    public:
    int score;
    void getscore()
    {
        cout << "Enter score in sports: ";
        cin >> score;
    }
    void displayscore()
    {
        cout << "Score in sports: " << score << endl;
    }
};

class Result : public Test, public Sports
{
    public:
    int total;
    float percentage;
    void gettotal()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        total += score;
    }
    void getpercentage()
    {
        percentage = (float)total / 6;
    }
    void displaytotal()
    {
        cout << "Total marks: " << total << endl;
    }
    void displaypercentage()
    {
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    Result r;
    r.getdata();
    r.getmarks();
    r.getscore();
    r.gettotal();
    r.getpercentage();
    r.display();
    r.displaymarks();
    r.displayscore();
    r.displaytotal();
    r.displaypercentage();
    return 0;
}