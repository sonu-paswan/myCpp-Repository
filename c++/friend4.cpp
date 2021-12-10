#include <bits/stdc++.h>
using namespace std;

class Vector
{
private:
    int x, y;

public:
    void setVector(int p, int q)
    {
        x = p;
        y = q;
    }
    friend int sum(Vector object);
};
class number
{
private:
    int num1, num2;

public:
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    friend int sum(number object2);
};
int sum(Vector object)
{
    return (object.x + object.y);
}
int sum(number object2)
{
    return (object2.num1 + object2.num2);
}
int main()
{
    Vector V1;
    V1.setVector(7,8);
    number x;
    x.setNumber(2,3);
    cout<<sum(V1)<<endl;
    cout<<sum(x);
    return 0;
}
// note:- friend function is not member function of any class 