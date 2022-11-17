// cop content of 1 file to another 

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    char ch;
    ifstream fin("dummy1.txt");
    ofstream fout("dummy2.txt");
    while (fin)
    {
        fin.get(ch);
        fout << ch;
    }
    fin.close();
    fout.close();
    return 0;
}
