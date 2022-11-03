// Create a class which stores employee name,id and salary Derive two classes from
// “Employee’ class: ‘Regular’ and ‘Part-Time’, The ‘Regular’ class stores DA, HRA
// and basic salary, The “Part-Time” class stores the number of hours and pay per hour.
// Calculate the salary of a regular employee and a par-time employee, using virtual
// function

#include <iostream>
#include <conio.h>
using namespace std;

class Employee
{
    protected:
        char name[20];
        int id;
        float salary;
    public:
        void get_data()
        {
            cout << "Enter name of employee: ";
            cin >> name;
            cout << "Enter id of employee: ";
            cin >> id;
            cout << "Enter salary of employee: ";
            cin >> salary;
        }
        virtual void calculate_salary() = 0;
        void display_data()
        {
            cout << "Name of employee: " << name << endl;
            cout << "Id of employee: " << id << endl;
            cout << "Salary of employee: " << salary << endl;
        }
};

class Regular : public Employee
{
    private:
        float da, hra, basic_salary;
    public:
        void get_data()
        {
            Employee::get_data();
            cout << "Enter DA of employee: ";
            cin >> da;
            cout << "Enter HRA of employee: ";
            cin >> hra;
            cout << "Enter basic salary of employee: ";
            cin >> basic_salary;
        }
        void calculate_salary()
        {
            salary = da + hra + basic_salary;
        }
};

class Part_Time : public Employee
{
    private:
        int hours;
        float pay_per_hour;
    public:
        void get_data()
        {
            Employee::get_data();
            cout << "Enter number of hours of employee: ";
            cin >> hours;
            cout << "Enter pay per hour of employee: ";
            cin >> pay_per_hour;
        }
        void calculate_salary()
        {
            salary = hours * pay_per_hour;
        }
};

int main()
{
    Regular r;
    Part_Time p;

    cout << "Enter details of regular employee: " << endl;
    r.get_data();
    r.calculate_salary();
    cout << endl;

    cout << "Enter details of part-time employee: " << endl;
    p.get_data();
    p.calculate_salary();
    cout << endl;

    cout << "Details of regular employee: " << endl;
    r.display_data();
    cout << endl;

    cout << "Details of part-time employee: " << endl;
    p.display_data();
    cout << endl;

    return 0;
}

