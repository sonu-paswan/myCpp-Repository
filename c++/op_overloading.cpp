//operator  overloading in c++
#include <iostream>
using namespace std;
class complex
{
private:
    float a, b;

public:
    complex() //default constructor
    {
        a = 0;
        b = 0;
    }
    complex(float, float); //parameterized constructor
    void showdata()
    {
        cout << a << " + "
             << "i" << b << endl;
    }
    complex operator+(complex &);//operator overloading
   
};
complex ::complex(float x, float y) //definition
{
    a = x;
    b = y;
}
complex complex::operator+(complex &c)
{
     {
        complex sum;
        sum.a = a + c.a;
        sum.b = b + c.b;
        return sum;
    }
}

int main()
{
    complex c1(2, 1), c2(4, 8), c3;
    c3 = c1 + c2; // its is same as c3=c1.operator+(c2)
    cout << "first complex :";
    c1.showdata();
    cout << "\n";
    cout << "second complex :";
    c2.showdata();
    cout << "\n";
    cout<<"added complex :";
    c3.showdata();
    return 0;
}