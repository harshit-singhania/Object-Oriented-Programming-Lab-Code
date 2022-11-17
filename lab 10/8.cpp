// WAP to write multiple data to a file using insertion operator and read data from file
// using extraction operator.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a = 10;
    float b = 10.5;
    char c = 'a';
    ofstream fout("dummy1.txt");
    fout << a << " " << b << " " << c;
    fout.close();
    ifstream fin("dummy1.txt");
    fin >> a >> b >> c;
    cout << a << " " << b << " " << c;
    fin.close();
    return 0;
}

