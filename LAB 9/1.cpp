// Create a class shape. Derive three classes from it; Circle, Square and Triangle, Find area
// of each shape and display it, using virtual function.

#include <iostream>
#include <conio.h>
using namespace std;

class shape
{
    protected:
        float area;
    public:
        virtual void get_area() = 0;
        virtual void display_area() = 0;
};

class circle : public shape
{
    private:
        float radius;
    public:
        void get_area()
        {
            cout << "Enter radius of circle: ";
            cin >> radius;
            area = 3.14 * radius * radius;
        }
        void display_area()
        {
            cout << "Area of circle is: " << area << endl;
        }
};

class square : public shape
{
    private:
        float side;
    public:
        void get_area()
        {
            cout << "Enter side of square: ";
            cin >> side;
            area = side * side;
        }
        void display_area()
        {
            cout << "Area of square is: " << area << endl;
        }
};

class triangle : public shape
{
    private:
        float base, height;
    public:
        void get_area()
        {
            cout << "Enter base of triangle: ";
            cin >> base;
            cout << "Enter height of triangle: ";
            cin >> height;
            area = 0.5 * base * height;
        }
        void display_area()
        {
            cout << "Area of triangle is: " << area << endl;
        }
};

int main()
{
    shape *s;
    circle c;
    square sq;
    triangle t;
    s = &c;
    s->get_area();
    s->display_area();
    s = &sq;
    s->get_area();
    s->display_area();
    s = &t;
    s->get_area();
    s->display_area();
    getch();
    return 0;
}