// WAP to demonstrate the order of call of constructors and destructors in case of virtual
// base class .

#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() // constructor
	{
		a = 10;
	}

	~A() // destructor 
	{
		cout << "a" << endl;
	}
 };

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main()
{
	D object; // object creation of class d
	cout << "a = " << object.a << endl;

	return 0;
}
