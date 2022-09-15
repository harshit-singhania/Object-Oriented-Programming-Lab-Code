// ‘Create a class which stores employee name.id and salary Derive two classes from
// “Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
// basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
// Calculate the salary of a regular employee and a par-time employee.

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    int salary;

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Regular : public Employee
{
public:
    int da;
    int hra;
    int basic;

    void getdata()
    {
        Employee::getdata();
        cout << "Enter DA: ";
        cin >> da;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter basic salary: ";
        cin >> basic;
    }

    void display()
    {
        Employee::display();
        cout << "DA: " << da << endl;
        cout << "HRA: " << hra << endl;
        cout << "Basic salary: " << basic << endl;
    }

    void calculate()
    {
        salary = da + hra + basic;
    }
};

class PartTime : public Employee
{
public:
    int hours;
    int pay;

    void getdata()
    {
        Employee::getdata();
        cout << "Enter number of hours: ";
        cin >> hours;
        cout << "Enter pay per hour: ";
        cin >> pay;
    }

    void display()
    {
        Employee::display();
        cout << "Number of hours: " << hours << endl;
        cout << "Pay per hour: " << pay << endl;
    }

    void calculate()
    {
        salary = hours * pay;
    }
};

int main()
{
    Regular r;
    PartTime p;
    r.getdata();
    p.getdata();
    r.calculate();
    p.calculate();
    r.display();
    p.display();
    return 0;
}