//program to understand friend function in c++
#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void setdata(int, int);
    void showdata();
    friend void fun(complex); //friend  function declaration
};

void complex::setdata(int x, int y)
{
    a = x;
    b = y;
}
void complex::showdata()
{
    cout << "complex is :" << a << "+"
         << "i" << b << endl;
}
void fun(complex s)   //friend function definition
{
    cout << "negative complex :" << -s.a << "-i" << s.b<<endl;
}
int main()
{
    complex c1, c2;
    c1.setdata(6, 9);
    c1.showdata();
    fun(c1);  //friend function(fun) is called without object

    return 0;
} 