// WAP to convert all uppercase letters in a given file, to lower case and vice-versa

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
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        fout << ch;
    }
    fin.close();
    fout.close();
    return 0;
}

