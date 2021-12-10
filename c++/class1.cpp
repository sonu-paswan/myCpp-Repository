//class in c++
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "enter complex number :";
        cin >> a >> b;
    }
    void showdata(); //declaraion of showdata function
};

void complex ::showdata() //definition of showdata function outside of class  using 
{                         //scope resolution operator
    cout << "enter complex number is :" << endl;
    cout << a << " + "
         << "i" << b;
}
int main()
{
    complex c;
    c.getdata();
    c.showdata();
    return 0;
}
// in C++  class members and function are by default private