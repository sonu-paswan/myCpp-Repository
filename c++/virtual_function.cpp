// CPP program to illustrate
// working of Virtual Functions
// geeksforgeeks reference
#include <iostream>
using namespace std;

class Base
{
public:
	void fun_1() { cout << "base-1\n"; }
	virtual void fun_2() { cout << "base-2\n"; }
	virtual void fun_3() { cout << "base-3\n"; }
	virtual void fun_4() { cout << "base-4\n"; }
};

class Derived : public Base
{
public:
	void fun_1() { cout << "derived-1\n"; }
	void fun_2() { cout << "derived-2\n"; }
	void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
	Base *p;
	Derived derived_obj;
	p = &derived_obj;

	// Early binding because fun1() is non-virtual
	// in base
	p->fun_1();

	// Late binding (RTP)
	p->fun_2();

	// Late binding (RTP)
	p->fun_3();

	// Late binding (RTP)
	p->fun_4();

	// Early binding but this function call is
	// illegal(produces error) becasue pointer
	// is of base type and function is of
	// derived class
	// p->fun_4(5);
}
