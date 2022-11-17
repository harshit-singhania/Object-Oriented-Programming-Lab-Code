// write 10 strings into file and display

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    char ch;
    ofstream fout("dumm3.txt");
    for (int i = 0; i < 10; i++)
    {
        fout << "write 10 strings into file and display" << endl;
    }
    fout.close();
    ifstream fin("dummy3.txt");
    while (fin)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    return 0;
}

