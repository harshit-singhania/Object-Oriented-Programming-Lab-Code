// throw and handle division by zero error 

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw "Division by zero error";
        }
        cout << "a / b = " << a / b << endl;
    } catch (const char *msg) {
        cout << msg << endl;
    }
    return 0;
}

