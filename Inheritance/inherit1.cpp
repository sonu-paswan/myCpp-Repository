//method overriding and method hiding in inheritance in c++
#include <bits/stdc++.h>
using namespace std;
class Father
{
public:
    void fun1()
    {
        cout << "Father can paint !" << endl;
    }
    void fun2()
    {
        cout << "Father can walk !" << endl;
    }
};
class Son : public Father
{
private:
    int myNumber;

public:
    void fun1() //method overriding
    {
        cout << "Son can also paint !" << endl;
    }
    void fun2(int x) //method hiding
    {
        myNumber = x;
        cout << "Son can Run !" << endl;
    }
};
int main()
{
    Son Raj;
    Raj.fun1();
    Raj.fun2(3);

    return 0;
}