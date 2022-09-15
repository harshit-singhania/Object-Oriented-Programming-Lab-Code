// Create two classes which stores distance in feet, inches and meter, centimeter format
// respectively. Write a function which compares distance in object of these classes and
// displays the larger one.

#include <iostream>
using namespace std;

class A
{
public:
    float feet, inch;
    void fetch()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
};

class B {
    public: 
    float meter, centimeter;
    void fetchd() {
        cout << "Enter meter: ";
        cin >> meter;
        cout << "Enter centimeter: ";
        cin >> centimeter;
    }
};

void compare(A &x, B &y) {
    float a = x.feet * 12 + x.inch;
    float b = y.meter * 100 + y.centimeter;
    if (a > b) {
        cout << "A is greater" << endl;
    } else {
        cout << "B is greater" << endl;
    }
}

int main() {
    A a;
    B b;
    a.fetch();
    b.fetchd();
    compare(a, b);
    return 0;
}
