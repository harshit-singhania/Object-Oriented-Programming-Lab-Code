// DISPLAY THE CALL OF CONSTRUCTOR AND DESTRUCTOR IN CASE OF MULTIPLE INHERITANCE 
// THE CONSTRUCTOR IN QUESTION WILL TAKE YOUR ROLL NUMBER AND DISPLAY 
// SQUARE YOUR ROLL NUMBER

#include <iostream> 
#include <string>
#include <fstream> 
using namespace std; 

class Parent {
    public: 
    int roll; 
    Parent() {
        cout << "Parent constructor called" << endl;
    } 
    void square(int roll) {
        int sq = roll * roll;
        cout << "Square is : " << sq << endl;
    }
    
    ~Parent() {
        cout << "Parent destructor called" << endl;
    }
};

class Child : public Parent{
    public: 
    int roll;
    Child() {
        cout << "Child constructor called" << endl;
    } 
    void square(int roll) { 
        int sq = roll * roll; 
        cout << "Square is : " << sq << endl;
    }
    ~Child() {
        cout << "Child destructor called" << endl;
    }
};

class Sibling : public Parent {
    public: 
    int roll;
    Sibling() {
        cout << "Sibling constructor called" << endl;
    } 
    void square(int roll) { 
        int sq = roll * roll; 
        cout << "Square is : " << sq << endl;
    }
    ~Sibling() {
        cout << "Sibling destructor called" << endl;
    }
};

int main() {
    Parent p; 
    Child c;
    Sibling s;
    p.square(890);
    c.square(890);
    s.square(890);
    return 0;
}