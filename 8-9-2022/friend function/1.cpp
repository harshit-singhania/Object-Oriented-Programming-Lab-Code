// use friend function to swap data between two private classes
#include <iostream>
using namespace std; 

class B; // forward declaration

class A {
	private: 
	int a;
	public:
		void setdata(int x) {
			a = x;
		}
		friend void swap(A &, B &);
		void display() {
			cout << "a = " << a << endl;
		}
};

class B {
	private:
	int b; 
	public: 
		void setdata(int x) {
			b = x; 
		}
		friend void swap(A &, B &); 
		void display() {
			cout << "b = " << b << endl; 
		}
}; 

void swap(A &x, B &y) {
	int temp = x.a; 
	x.a = y.b; 
	y.b = temp; 
}

int main() {
	A a; 
	B b; 
	a.setdata(10); 
	b.setdata(20); 
	swap(a, b); 
	a.display(); 
	b.display(); 
	return 0; 
}

