//multilevel inheritance
#include <bits/stdc++.h>
using namespace std;
class Father
{
public:
    void fun1()
    {
        cout << "I am your Dad" << endl;
    }
};
class Son : public Father
{
    public :
    void fun2()
    {
        cout << "I am Son" << endl;
    }
};
class Grandson : public Son
{
    public :
    void fun3()
    {
        cout << "I am Grandson" << endl;
    }
};
int main()
{
    Grandson Kishan;
    Kishan.fun1();
    Kishan.fun2();
    Kishan.fun3();
    return 0;
}