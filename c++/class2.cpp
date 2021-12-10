//c++ program to understand class (function and function return class and argument in class)
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    complex add(complex); // declaration of function add()

    void showdata()
    {
        cout << a << " + "
             << "i" << b;
    }
};
complex complex ::add(complex s) // definition of function add()
{
    complex temp;
    temp.a = a + s.a;
    temp.b = b + s.b;
    return temp;
}
int main()
{
    int a, b, e, d;
    complex c, c1, c2;
    cout << "enter first complex number :" << endl;
    cin >> a >> b;
    c1.setdata(a, b);

    cout << "enter second complex number :" << endl;
    cin >> e >> d;
    c2.setdata(e, d);
    cout << "first complex number:";
    c1.showdata();
    cout << "\n";
    cout << "second complex number:";
    c2.showdata();
    cout << "\n";
    cout << "addition :" << endl;
    c = c1.add(c2);
    c.showdata();
    return 0;
}