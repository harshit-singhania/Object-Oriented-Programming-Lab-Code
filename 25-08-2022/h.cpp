#include <iostream>

using namespace std;

int main()
{
    int x=10;
    // ref is a referance to x.
    int& ref=x;
    //Value of x is now changed to 20
    ref=20;
    //value of x is now changed to 30
    x=30;
    cout<<"ref="<<ref<<endl;

    return 0;
}