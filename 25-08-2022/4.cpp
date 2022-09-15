#include <iostream>
using namespace std;

int glob = 100; // global variable

int main() {
    int loc = 200; // local variable
    int glob = 250; // local variable
    int sum = loc + glob;
    cout << "glob = " << glob << endl;
    cout << "loc = " << loc << endl;
    cout << "sum = " << sum << endl;
    return 0;
}