// Create a class complex which stores real and imaginary part of a complex number.
// Include all types of constructors and destructor. The destructor should display a
// message about the destructor being invoked. Create objects using different
// constructors and display them.

#include <iostream>
using namespace std;

class complex {
    public:
    int real, imag;
    public:
    complex() {
        real = 0;
        imag = 0;
    }
    complex(int x) {
        real = x;
        imag = 0;
    }
    complex(int x, int y) {
        real = x;
        imag = y;
    }
    ~complex() {
        cout << "Destructor invoked" << endl;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    complex a, b(1), c(2, 3);
    a.display();
    b.display();
    c.display();
    return 0;
}