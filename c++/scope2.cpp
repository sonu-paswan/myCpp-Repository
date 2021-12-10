//scope resolution operator in c++

#include <iostream>
using namespace std;
class fun
{
private:
    int x = 9;

public:
    void showdata(int x);
};
void fun::showdata(int x)
{
    cout << "local variable =" << x << endl;
    cout << "class variable=" << fun::x << endl;
}
int main()
{
    fun obj;
    
    obj.showdata(3);

    return 0;
}