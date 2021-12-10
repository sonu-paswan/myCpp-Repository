#include <iostream>
using namespace std;
//look out for the memory management in virtual base class function

class A
{
public:
    int a;
    // void f1() { cout << "f1"; }
};
class B1 : virtual public A
{
public:
    int b;
    // void f2() { cout << "f2"; }
};
class B2 : virtual public A
{
public:
    int b2;
    // void f3() { cout << "f3"; }
};
class C : public B1, public B2
{
public:
    int c;
    // void f4() { cout << "f4"; }
};
int main()
{
    cout << "size of A " << sizeof(A) << endl;
    cout << "size of B1 " << sizeof(B1) << endl;
    cout << "size of B1 " << sizeof(B2) << endl;
    cout << "size of C " << sizeof(C) << endl;
    return 0;
}
//memory consumption
//class A => 4 bytes 
//class B1 => 16 bytes 
//class B2 => 16 bytes 
//class C => 40 bytes 