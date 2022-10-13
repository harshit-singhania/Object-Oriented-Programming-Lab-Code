// WAP to demonstrate the order of call of constructors and destructors in case of multi-
// level inheritance.

#include <iostream>
using namespace std;
class base
{
    int a;

public:
    base(int b)
    {
        a = b;
        cout << "\nBase Constructor Called";
        cout << "\nA= " << a;
    }
    ~base()
    {
        cout << "\nBase Destructor Called";
    }
};
class base1 : public base
{
    int b;

public:
    base1(int a, int b) : base(b) // the base1 is derived from base
    {
        b = a;
        cout << "\nBase 1 Constructor Called";
        cout << "\nB= " << b;
    }
    ~base1()
    {
        cout << "\nBase1 Destructor Called";
    }
};
class derived : public base1
{
    int x;

public:
    derived(int y, int a, int b) : base1(a, y) // one parameter for base class and other for base 1
    {
        x = y;
        cout << "\nDerived Construtor Called";
        cout << "\nX= " << x;
    }
    ~derived()
    {
        cout << "\nDerived Destructor Called";
    }
};
int main()
{
    derived d(10, 20, 21);
}