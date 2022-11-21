// use class template to display data of multiple types 

#include <iostream>
using namespace std;

template <class T1, class T2>
class Display {
    T1 a;
    T2 b;
    public:
    Display(T1 x, T2 y) {
        a = x;
        b = y;
    }
    void show() {
        cout << a << " and " << b << endl;
    }
};

int main() {
    Display <int, char> d1(10, 'A');
    Display <float, char> d2(10.5, 'B');
    d1.show();
    d2.show();
    return 0;
}

