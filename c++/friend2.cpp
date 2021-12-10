#include <iostream>
using namespace std;

class num2;// forward declaration,because num2 is used in friend function before its definition
class num1
{
private:
    int a;

public:
    void Setdata(int x)
    {
        a = x;
    }
    void Showdata()
    {
        cout << "variable in class num1 :" << a << endl;
    }
    friend void fun(num1, num2);
};
class num2
{
private:
    int b;

public:
    void Setdata(int t)
    {
        b = t;
    }
    void Showdata()
    {
        cout << "variable in class num2 :" << b << endl;
    }
    friend void fun(num1, num2);
};
void fun(num1 obj1, num2 obj2)
{
    cout << "sum =" << obj1.a + obj2.b << endl;
}
int main()
{
    num1 N1;
    N1.Setdata(2);
    N1.Showdata();
    num2 N2;
    N2.Setdata(7);
    N2.Showdata();
    fun(N1, N2); //fun fuction adds member variables of two different class
    return 0;
}