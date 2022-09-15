// Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle,
// Include the relevant data members and functions in all the classes. Find the area of each
// shape and display it.

#include <iostream>
using namespace std;

class Shape
{
public:
    float area;
    void getArea()
    {
        cout << "Area: " << area << endl;
    }
};

class Circle : public Shape
{
public:
    float radius;
    void getRadius()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }
    void calculateArea()
    {
        area = 3.14 * radius * radius;
    }
};

class Triangle : public Shape
{
public:
    float base, height;
    void getBaseHeight()
    {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }
    void calculateArea()
    {
        area = 0.5 * base * height;
    }
};

class Rectangle : public Shape
{
public:
    float length, breadth;
    void getLengthBreadth()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    void calculateArea()
    {
        area = length * breadth;
    }
};

int main()
{
    Circle c;
    Triangle t;
    Rectangle r;
    c.getRadius();
    c.calculateArea();
    c.getArea();
    t.getBaseHeight();
    t.calculateArea();
    t.getArea();
    r.getLengthBreadth();
    r.calculateArea();
    r.getArea();
    return 0;
}