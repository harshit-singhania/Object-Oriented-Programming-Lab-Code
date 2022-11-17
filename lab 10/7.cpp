// WAP to read and write objects to a file, using read and write functions.

#include <iostream> 
#include <fstream>
using namespace std;

int main() {
    char ch;
    ifstream fin("dummy1.txt");
    ofstream fout("dummy2.txt");
    while (fin) {
        fin.get(ch);
        fout.put(ch);
    }
    fin.close();
    fout.close();
    return 0;
}