//c++ program for function overloading 
#include <iostream>
using namespace std;
int absolut(int a)
{
    if (a < 0)
    {
        a = -a;
    }

    return a;
}
float absolute(float f)
{
    if (f < 0.0)
    {
        f = -f;
    }
    return f;
}
int main()
{
    int a, c = -8;
    float b, d = -7.8;
    a = absolute(c);
    b = absolute(d);
    cout << "absolute value of " << c << " is " << a << endl;
    cout << "absolue value of " << d << " is " << b << endl;
    return 0;
}