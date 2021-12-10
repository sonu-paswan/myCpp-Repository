//program to understand function overloading 
#include <iostream>
using namespace std;
void fun(int a)
{
    cout << "increment :" << ++a << endl;
}
void fun(double b)
{
    cout << "decrement :" << --b << endl;
}
void fun(char s)
{
    cout << "character entered :" << s << endl;
}

int main()
{
    fun(2);
    fun(7.9);
    fun('S');
    return 0;
}