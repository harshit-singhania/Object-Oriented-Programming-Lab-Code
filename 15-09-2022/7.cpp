// Create a class which stores account number, customer name and balance. Derive two
// classes from “Account” class: *Savings’ and ‘Current’. The ‘Savings’ class stores
// minimum balance. The “Current" class stores the over-due amount. Include member
// functions in the appropriate class for

// deposit money

// -withdraw [For saving account minimum balance should be checked.

// [For current account overdue amount should be calculated.]
// display balance



#include <iostream>
using namespace std;

class Account
{
public:
    int accno;
    string name;
    int balance;

    void getdata()
    {
        cout << "Enter account number: ";
        cin >> accno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Account number: " << accno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Savings : public Account
{
public:
    int minbal;

    void getdata()
    {
        Account::getdata();
        cout << "Enter minimum balance: ";
        cin >> minbal;
    }

    void display()
    {
        Account::display();
        cout << "Minimum balance: " << minbal << endl;
    }

    void deposit()
    {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Balance after deposit: " << balance << endl;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance - amount < minbal)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Balance after withdraw: " << balance << endl;
        }
    }
};

class Current : public Account
{
public:
    int overdue;

    void getdata()
    {
        Account::getdata();
        cout << "Enter overdue amount: ";
        cin >> overdue;
    }

    void display()
    {
        Account::display();
        cout << "Overdue amount: " << overdue << endl;
    }

    void deposit()
    {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Balance after deposit: " << balance << endl;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance - amount < overdue)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Balance after withdraw: " << balance << endl;
        }
    }
};

int main()
{
    Savings s;
    Current c;
    int choice;
    cout << "Enter 1 for savings account and 2 for current account: ";
    cin >> choice;
    if (choice == 1)
    {
        s.getdata();
        s.display();
        s.deposit();
        s.withdraw();
    }
    else if (choice == 2)
    {
        c.getdata();
        c.display();
        c.deposit();
        c.withdraw();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
