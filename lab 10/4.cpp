// display content of file in reverse order 

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    char ch;
    ifstream fin("dummy1.txt");
    while (fin)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    return 0;
}

