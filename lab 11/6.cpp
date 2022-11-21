// throw and handle array out of bound exception 

#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    cout << "Enter index: ";
    cin >> i;
    try {
        if (i < 0 || i > 4) {
            throw "Array out of bound exception";
        }
        cout << "a[" << i << "] = " << a[i] << endl;
    } catch (const char *msg) {
        cout << msg << endl;
    }
    return 0;
}

