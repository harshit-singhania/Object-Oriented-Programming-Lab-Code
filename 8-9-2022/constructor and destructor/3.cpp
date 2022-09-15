// Create a class which stores a sting and its length as data members. Include all the
// constructors, Include a member function to join two strings and display the
// concatenated string.

#include <iostream>
using namespace std;

class A {
    public:
    string s;
    int len;
    public:
    A() {
        s = "";
        len = 0;
    }
    A(string x) {
        s = x;
        len = x.length();
    }
    void join(A &x, A &y) {
        s = x.s + y.s;
        len = s.length();
    }
    void display() {
        cout << "String: " << s << endl;
        cout << "Length: " << len << endl;
    }
};

int main() {
    A a("Hello"), b("World"), c;
    c.join(a, b);
    c.display();
    return 0;   
}