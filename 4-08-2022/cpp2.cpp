#include <iostream>
#include <iomanip>
using namespace std;

class stdu
{

public:
     string name;
     int roll;
     int tm;
};

int main()
{
     stdu stdu1;
     cout << "enter name of the student:";
     cin >> stdu1.name;
     cout << "\nenter roll no:";
     cin >> stdu1.roll;
     cout << "\nenter total marks:";
     cin >> stdu1.tm;

     cout << "\n name:" << stdu1.name << "\n roll no:" << stdu1.roll << "\n total marks" << stdu1.tm;

     return 0;
}