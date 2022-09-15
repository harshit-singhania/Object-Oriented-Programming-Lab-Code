// WAP to demonstrate all types of inheritance.

#include <iostream>
using namespace std;

class Account
{
public:
    float salary = 60000;
};
//  Single inheritance
class Programmer : public Account
{
public:
    float bonus = 5000;
};

//    Multi level inheritance

class Student : public Programmer
{
public:
    float allowance = 10000;
};

// Multiple inheritance

class Teacher : public Account, public Programmer
{ 
public:
    float allowance = 10000;
};

// Hierarchical inheritance

class Person1 : public Account {
public:
    float allowance = 10000;
};

class Person2 : public Account {
public:
    float allowance = 10000;
};


